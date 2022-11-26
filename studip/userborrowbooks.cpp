#include "userborrowbooks.h"
#include "ui_userborrowbooks.h"

UserBorrowBooks::UserBorrowBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserBorrowBooks)
{
    ui->setupUi(this);

    ui->borrow_comboBox->setEditable(false); //设置不可编辑

    vec    = {ui->category_comboBox,ui->title_comboBox,ui->author_comboBox,ui->publisher_comboBox};
    str    = {"类别","书名","作者","出版社"};
    str_en = {"booktype","title","author","publisher"};

    resettingAllCombinBox();

    //用户提交筛选申请
    connect(ui->filter_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::filterBooks);
    //用户提交搜索申请
    connect(ui->search_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::searchBooks);
    //用户提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::returnLastWindow);
    //用户提交退出申请
    connect(ui->enterpersonalcenter_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::enterPersonalCenter);
    //用户提交重置申请
    connect(ui->resetting_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::resettingAllCombinBox);
    //用户提交借阅申请
    connect(ui->borrow_pushbutton,&QPushButton::clicked,this,&UserBorrowBooks::borrowBooks);
}

UserBorrowBooks::~UserBorrowBooks()
{
    delete ui;
}

void UserBorrowBooks::resettingAllCombinBox(){
    ui->allcount_lineEdit->clear();
    ui->current_lineEdit->clear();

    QSqlQuery query(DataBase::db);
    QString str = "select * from book";
    query.exec(str); //此处无需特判，该sql语句必能执行成功
    resettingAllControls(query,true);
}

void UserBorrowBooks::borrowBooks()
{
    QString title = ui->borrow_comboBox->currentText(); //获取用户选择的书籍名
    QString username = DataBase::currentuser[DataBase::USERNAME]; //获取当前用户的姓名

    QSqlQuery query(DataBase::db);
    QString sqlstr = QString("SELECT current_count from book where title = '%1'").arg(title);

    query.exec(sqlstr);
    while(query.next()){
        if(query.value(0).toInt() == 0){
            QMessageBox::critical(this, "Wrong","剩余数量不足，无法借阅",QMessageBox::Close);
            return;
        }
    }

    query.clear();
    sqlstr = QString("INSERT INTO borrow(customer_name,title,borrow_time,return_time,borrow_count,return_count) \
VALUES ('%1','%2',NOW(),NULL,1,0)").arg(username).arg(title); //插入借书记录
    if(!query.exec(sqlstr)){
        qDebug()<<sqlstr;
        qDebug()<<"执行失败";
        return;
    }
    sqlstr = QString("UPDATE book SET current_count = all_count + \
IFNULL((SELECT SUM(return_count) FROM borrow \
WHERE borrow.`title` = '%1' AND \
borrow.`return_time` IS NOT NULL),0) - \
IFNULL((SELECT SUM(borrow_count) FROM borrow \
WHERE borrow.`title` = '%2' AND \
borrow.`borrow_time` IS NOT NULL),0) \
WHERE book.`title` = '%3'").arg(title).arg(title).arg(title); //更新书籍数量
    if(!query.exec(sqlstr)){
        qDebug()<<sqlstr;
        qDebug()<<"执行失败";
        return;
    }
    if(ui->current_lineEdit->text() != ""){
        int a  = ui->current_lineEdit->text().toInt();
        ui->current_lineEdit->setText(QString::number(a-1));
    }

    QMessageBox::information(this, "succeed","借书成功",QMessageBox::Close);
}

void UserBorrowBooks::enterPersonalCenter()
{
    this->close();
    PersonalCenter* child = new PersonalCenter(PersonalCenter::USERBORROWBOOKS);
    child->show();
}

void UserBorrowBooks::resettingAllControls(QSqlQuery &query,bool additem)
{
    QVector<QSet<QString>> result(6);
    while(query.next()){
        for(int i = 0; i < 6; i++){
            result[i].insert(query.value(i).toString());
        }
    }

    if(additem == false){
        for(int i = 0; i < vec.size();i++){
            vec[i]->clear();
            for(auto& x : result[i]){
                vec[i]->addItem(x);
            }
        }
    }else{
        for(int i = 0; i < vec.size();i++){
            vec[i]->clear();
            vec[i]->addItem(this->str[i]); //加上标题
            for(auto& x : result[i]){
                vec[i]->addItem(x);
            }
        }
    }
    ui->borrow_comboBox->clear();
    for(auto&x: result[1]) ui->borrow_comboBox->addItem(x);
    if(result[1].size() == 1){
        ui->allcount_lineEdit->setText(*(result[4].begin()));
        ui->current_lineEdit ->setText(*(result[5].begin()));
    }
    query.clear();
}

void UserBorrowBooks::filterBooks(){
    QSqlQuery query(DataBase::db);
    int i = 0;
    while(vec[i]->currentIndex() == 0) i++;
    if(i >= vec.size()) return;
    QString str = QString("select * from book where %1 = '%2'").arg(str_en[i]).arg(vec[i]->currentText());
    query.exec(str); //此处无须特判，一定能搜索到结果
    resettingAllControls(query);
}

void UserBorrowBooks::searchBooks(){
    ui->allcount_lineEdit->clear();
    ui->current_lineEdit ->clear();
    QSqlQuery query(DataBase::db);
    QString str = QString("select * from book where title = '%1'").arg(ui->title_lineEdit->text());
    query.exec(str);
    if(query.size()){
        resettingAllControls(query);
        return;
    }
    str = QString("select * from book where title REGEXP '^%1'").arg(ui->title_lineEdit->text());
    query.exec(str);
    if(query.size()){
        resettingAllControls(query);
        return;
    }
    str = QString("select * from book where title REGEXP '[%1]'").arg(ui->title_lineEdit->text());
    query.exec(str);
    if(query.size()){
        resettingAllControls(query);
        return;
    }else{
        QMessageBox::information(this, "Information","未搜索到结果",QMessageBox::Close);
    }
}

void UserBorrowBooks::returnLastWindow(){
    UserWindow* father = new UserWindow();
    this->close();
    father->exec();
}
