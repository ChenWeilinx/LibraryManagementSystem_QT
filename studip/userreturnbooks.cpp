#include "userreturnbooks.h"
#include "ui_userreturnbooks.h"

UserReturnBooks::UserReturnBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserReturnBooks)
{
    ui->setupUi(this);

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能编辑表格
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                               "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");//设置表头风格

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//行自适应
    //    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列自适应

    freshTable();

    //用户提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&UserReturnBooks::returnLastWindow);
    //用户提交进入个人中心申请
    connect(ui->personalcenter_pushbutton,&QPushButton::clicked,this,&UserReturnBooks::enterPersonalCenter);
    //用户提交借阅申请
    connect(ui->returnbook_pushbutton,&QPushButton::clicked,this,&UserReturnBooks::returnBooks);
    //用户提交刷新申请
    connect(ui->freshtable_pushbutton,&QPushButton::clicked,this,&UserReturnBooks::freshTable);
}

UserReturnBooks::~UserReturnBooks()
{
    delete ui;
}

void UserReturnBooks::returnLastWindow()
{
    this->close();
    UserWindow * father = new UserWindow;
    father->show();
}

void UserReturnBooks::enterPersonalCenter()
{
    this->close();
    PersonalCenter* child = new PersonalCenter(PersonalCenter::USERRETURNBOOKS);
    child->show();
}

void UserReturnBooks::returnBooks()
{
    QString title = ui->comboBox->currentText();
    QString username = DataBase::currentuser[DataBase::USERNAME];
    QSqlQuery query(DataBase::db);

    QString sqlstr = QString("INSERT INTO borrow(customer_name,title,borrow_time,return_time,borrow_count,return_count) \
VALUES ('%1','%2',NULL,NOW(),0,1)").arg(username).arg(title); //插入还书记录
    if(!query.exec(sqlstr)){
        qDebug()<<sqlstr;
        qDebug()<<"执行失败";
        return;
    }

    query.clear();
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
    QMessageBox::information(this, "succeed","还书成功",QMessageBox::Close);
    freshTable();
}

void UserReturnBooks::freshTable()
{
    ui->comboBox->clear();
    ui->tableWidget->clear();
    QStringList header = {"书名","作者","出版社","类别","应还数量"};
    QSqlQuery query(DataBase::db);
    QString sqlstr = QString("SELECT book.`title`,book.`author`,book.`publisher`,book.`booktype`, \
(SUM(borrowA.`borrow_count`)- \
IFNULL((SELECT SUM(borrowB.`return_count`) \
FROM borrow AS borrowB \
WHERE borrowB.`customer_name` = '%1' AND \
borrowB.`return_time` IS NOT NULL AND \
borrowA.title = borrowB.title),0)) AS owe \
FROM  book, borrow AS borrowA \
WHERE book.`title` = borrowA.`title` AND \
borrowA.`customer_name` = '%2' AND \
borrowA.`borrow_time` IS NOT NULL \
GROUP BY borrowA.`title`").arg(DataBase::currentuser[DataBase::USERNAME]).arg(DataBase::currentuser[DataBase::USERNAME]);
    if(!query.exec(sqlstr)){
       qDebug()<<"执行失败";
       return;
    }

    if(query.size() == 0){
        ui->label->setText("未查询到借书记录");
        return;
    }
    int colcnt = query.record().count();

    ui->tableWidget->setColumnCount(colcnt);    //列数
    ui->tableWidget->setRowCount(query.size()); //行数
    ui->tableWidget->setHorizontalHeaderLabels(header); //设置表头

    short rowcnt = 0;
    while (query.next()) {
        if(query.value(colcnt-1).toInt() == 0) continue;
        ui->comboBox->addItem(query.value(0).toString());
        for(int i = 0; i < colcnt; i++){
            /*setItem设置条目栏中的一个格子的信息*/
            QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
            // 表格内元素设置字体居中
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->tableWidget->setItem(rowcnt, i, item);
        }
        rowcnt++;
    }
    if(ui->comboBox->currentIndex() == -1){
        ui->tableWidget->clear();
        ui->label->setText("暂无书籍需还");
    }
}
