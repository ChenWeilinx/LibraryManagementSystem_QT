#include "managerinputbooks.h"
#include "ui_managerinputbooks.h"

ManagerInputBooks::ManagerInputBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManagerInputBooks)
{
    ui->setupUi(this);

    //管理员提交图书入库申请
    connect(ui->comfirm_pushbutton,&QPushButton::clicked,this,&ManagerInputBooks::inputBooks);
    //管理员提交取消申请
    connect(ui->cancel_pushbutton,&QPushButton::clicked,this,&ManagerInputBooks::cancelInoutBooks);
}

ManagerInputBooks::~ManagerInputBooks()
{
    delete ui;
}

void ManagerInputBooks::inputBooks()
{
    QSqlQuery query(DataBase::db);

    if(ui->title_lineedit->text() == ""){
        QMessageBox::critical(this, "Wrong","请输入完整书名",QMessageBox::Close);
    }else if(ui->author_lineedit->text() == ""){
        QMessageBox::critical(this, "Wrong","请输入完整作者名",QMessageBox::Close);
    }else if(ui->publisher_lineedit->text() == ""){
        QMessageBox::critical(this, "Wrong","请输入完整出版社名",QMessageBox::Close);
    }else if(ui->all_count_lineedit->text() == "" || ui->all_count_lineedit->text().toInt() <= 0){
        QMessageBox::critical(this, "Wrong","请输入有效数量",QMessageBox::Close);
    }else if(ui->booktype_lineedit->text() == ""){
        QMessageBox::critical(this, "Wrong","请输入完整书类型名",QMessageBox::Close);
    }else{
        QString sqlstr = QString("INSERT INTO book(title,author,publisher,all_count,current_count,booktype) \
VALUES ('%1','%2','%3','%4','%5','%6')").
                                 arg(ui->title_lineedit->text()).
                                 arg(ui->author_lineedit->text()).
                                 arg(ui->publisher_lineedit->text()).
                                 arg(ui->all_count_lineedit->text()).
                                 arg(ui->all_count_lineedit->text()).
                                 arg(ui->booktype_lineedit->text());
        if(!query.exec(sqlstr)){
            qDebug()<<sqlstr;
            QMessageBox::critical(this, "Wrong","入库失败，已有同名书籍",QMessageBox::Close);
            return;
        }
        QMessageBox::information(this, "succeed","入库成功",QMessageBox::Close);
    }
}

void ManagerInputBooks::cancelInoutBooks()
{
    this->close();
}
