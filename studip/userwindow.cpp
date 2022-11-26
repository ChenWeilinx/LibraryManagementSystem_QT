#include "userwindow.h"
#include "ui_userwindow.h"
UserWindow::UserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);

    //用户提交还书申请
    connect(ui->returnbooks_pushbutton,&QPushButton::clicked,this,&UserWindow::returnBooks);
    //用户提交借书申请
    connect(ui->borrow_books_pushbutton,&QPushButton::clicked,this,&UserWindow::borrowBooks);
    //用户提交返回上级菜单申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&UserWindow::returnLastWindow);
    //用户提交进入个人中心申请
    connect(ui->person_center_pushbutton,&QPushButton::clicked,this,&UserWindow::enterPersonalCenter);
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::returnBooks(){
    this->close();
    UserReturnBooks* child = new UserReturnBooks;
    child->show();
}

void UserWindow::borrowBooks(){
    this->close();
    UserBorrowBooks* child = new UserBorrowBooks();
    child->show();
}

void UserWindow::returnLastWindow(){
    this->close();
    MainWindow* father = new MainWindow();
    father->show();
}

void UserWindow::enterPersonalCenter(){
    this->close();
    PersonalCenter* child = new PersonalCenter(PersonalCenter::USERWINDOW);
    child->show();
}
