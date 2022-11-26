#include "personalcenter.h"
#include "ui_personalcenter.h"



PersonalCenter::PersonalCenter(int type,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalCenter)
{
    ui->setupUi(this);

    this->type = type;

    /*刷新提示*/
    ui->returnbook_label->clear();
    ui->borrowbook_label->clear();
    /*借书表属性设置*/
    ui->borrowbook_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能编辑表格
    ui->borrowbook_tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                               "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");//设置表头风格

    ui->borrowbook_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//行自适应
    //    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列自适应

    /*还书表属性设置*/
    ui->return_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能编辑表格
    ui->return_tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                               "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");//设置表头风格

    ui->return_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//行自适应
    //    ui->return_tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列自适应

    freshPersonalCenter(); //刷新用户界面

    freshBorrowBook(); //刷新借书记录

    freshReturnBook(); //刷新还书记录

    //用户提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&PersonalCenter::returnLastWindow);
    //用户提交退出申请
    connect(ui->exit_pushbutton,&QPushButton::clicked,this,&PersonalCenter::close);
    //用户提交更改信息申请
    connect(ui->change_pushbutton,&QPushButton::clicked,this,&PersonalCenter::alterInformatioin);
}

PersonalCenter::PersonalCenter(int type,QString item, QString itemname,QWidget *parent):PersonalCenter(type,parent){
    this->item = item;
    this->itemname = itemname;
}


PersonalCenter::~PersonalCenter()
{
    delete ui;
}

void PersonalCenter::freshPersonalCenter(){
     QPixmap *pixmap;
     if(DataBase::currentuser[DataBase::GENDER] == "女")pixmap = new QPixmap(":/images/woman.png");
     else pixmap = new QPixmap(":/images/man.png");

     pixmap->scaled(ui->image_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
     ui->image_label->setScaledContents(true);
     ui->image_label->setPixmap(*pixmap);

     ui->username_label->setText(DataBase::currentuser[DataBase::USERNAME]);
     ui->gender_label->setText(DataBase::currentuser[DataBase::GENDER]);
     ui->password_label->setText(DataBase::currentuser[DataBase::PASSWORD]);
     ui->cteatedate_label->setText(DataBase::currentuser[DataBase::CURATE_DATE]);
     ui->type_label->setText(DataBase::currentuser[DataBase::TYPE]);
}

void PersonalCenter::freshBorrowBook(){
    ui->borrowbook_label->clear();

    QStringList header = {"书名","借阅时间","借阅数量"};
    QSqlQuery query(DataBase::db);
    QString sqlstr = QString("SELECT title,borrow_time,borrow_count FROM borrow WHERE customer_name = '%1' AND"
                             " borrow_time IS NOT NULL")
                    .arg(DataBase::currentuser[DataBase::USERNAME]);
    query.exec(sqlstr);
    if(!query.size()){
        ui->borrowbook_label->setText("暂无记录");
    }
    int colcnt = query.record().count();

    ui->borrowbook_tableWidget->setColumnCount(colcnt); //列数
    ui->borrowbook_tableWidget->setRowCount(query.size()); //行数

    ui->borrowbook_tableWidget->setHorizontalHeaderLabels(header); //设置表头
    short rowcnt = 0;
    while (query.next()) {
        for(int i = 0; i < colcnt; i++){
            /*setItem设置条目栏中的一个格子的信息*/
            QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
            // 表格内元素设置字体居中
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->borrowbook_tableWidget->setItem(rowcnt, i, item);
        }
        rowcnt++;
    }
}


void PersonalCenter::freshReturnBook(){
    ui->returnbook_label->clear();

    QStringList header = {"书名","还书时间","还书数量"};
    QSqlQuery query(DataBase::db);
    QString sqlstr = QString("SELECT title,return_time,return_count FROM borrow WHERE customer_name = '%1' AND return_time IS NOT NULL")
                    .arg(DataBase::currentuser[DataBase::USERNAME]);
    query.exec(sqlstr);
    if(!query.size()){
        ui->returnbook_label->setText("暂无记录");
    }
    int colcnt = query.record().count();

    ui->return_tableWidget->setColumnCount(colcnt); //列数
    ui->return_tableWidget->setRowCount(query.size()); //行数

    ui->return_tableWidget->setHorizontalHeaderLabels(header); //设置表头
    short rowcnt = 0;
    while (query.next()) {
        for(int i = 0; i < colcnt; i++){
            /*setItem设置条目栏中的一个格子的信息*/
            QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
            // 表格内元素设置字体居中
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->return_tableWidget->setItem(rowcnt, i, item);
        }
        rowcnt++;
    }
}


void PersonalCenter::returnLastWindow(){
    this->close();
    if(type == PersonalCenter::USERWINDOW){
        UserWindow* father = new UserWindow;
        father->show();
    }else if(type == PersonalCenter::MANAGERWINDOW){
        ManagerWindow* father = new ManagerWindow;
        father->show();
    }else if(type == PersonalCenter::USERBORROWBOOKS){
        UserBorrowBooks* father = new UserBorrowBooks;
        father->show();
    }else if(type == PersonalCenter::USERRETURNBOOKS){
        UserReturnBooks* father = new UserReturnBooks;
        father->show();
    }else{
        MainWindow* father = new MainWindow;
        father->show();
    }
}

void PersonalCenter::alterInformatioin(){
    int index    = ui->change_comboBox->currentIndex();
    QString item = ui->change_lineEdit->text();
    if(item == ""){
        QMessageBox::critical(this, "Wrong","输入内容不能为空",QMessageBox::Close);
        return;
    }else if(item.size() > 12){
        QMessageBox::critical(this, "Wrong","输入内容内容过长",QMessageBox::Close);
        return;
    }else if(index == 1 && item != "男" && item != "女"){
        QMessageBox::critical(this, "Wrong","无效性别",QMessageBox::Close);
        return;
    }
    QVector<QString> vec = {"customer_name","gender","customer_password"};
    QString sqlstr = "";
    QSqlQuery query(DataBase::db);
    sqlstr = QString("UPDATE customer SET %1 = '%2' WHERE customer_name = '%3'")
            .arg(vec[index]).arg(item).arg(DataBase::currentuser[DataBase::USERNAME]);
    query.exec(sqlstr);
    QMessageBox::information(this, "succeed","修改成功",QMessageBox::Close);

    DataBase::currentuser[index] = item; //修改本地用户信息

    freshPersonalCenter();

}
