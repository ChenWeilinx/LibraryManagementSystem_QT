#include "managerwindow.h"
#include "ui_managerwindow.h"

ManagerWindow::ManagerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);

    //管理员提交图书入库申请
    connect(ui->inputbooks_pushButton,&QPushButton::clicked,this,&ManagerWindow::inputBooks);
    //管理员提交用户管理申请
    connect(ui->usermanage_pushButton,&QPushButton::clicked,this,&ManagerWindow::_userManage);
    //管理员提交借阅记录申请
    connect(ui->borrow_pushButton,&QPushButton::clicked,this,&ManagerWindow::borrowManage);
    //管理员提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&ManagerWindow::returnLastWindow);
    //管理员提交查看个人中心申请
    connect(ui->person_center_pushbutton,&QPushButton::clicked,this,&ManagerWindow::enterPersonalCenter);
}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::inputBooks(){
    ManagerInputBooks* child = new ManagerInputBooks;
    child->show();
}

void ManagerWindow::_userManage(){
    this->close();
    userManage* child = new userManage; //命名有些失误
    child->show();
}

void ManagerWindow::borrowManage(){
    this->close();
    BorrowRecord* child = new BorrowRecord;
    child->show();
}

void ManagerWindow::returnLastWindow(){
    this->close();
    MainWindow* father = new MainWindow;
    father->show();
}

void ManagerWindow::enterPersonalCenter(){
    this->close();
    PersonalCenter* child = new PersonalCenter(PersonalCenter::MANAGERWINDOW);
    child->show();
}
