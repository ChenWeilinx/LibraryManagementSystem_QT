#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DataBase::initUsers();

    //保存用户信息
    ui->username_lineedit->setText(DataBase::currentuser.size() == 0 ? "":DataBase::currentuser[0]);
    ui->password_lineedit->setText(DataBase::currentuser.size() == 0 ? "":DataBase::currentuser[2]);

    //用户注册
    connect(ui->register_pushbutton,&QPushButton::clicked,this,&MainWindow::userRegester);
    //用户登录
    connect(ui->login_pushbutton,&QPushButton::clicked,this,&MainWindow::login);
    //退出登录系统
    connect(ui->exit_pushbutton,&QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::login(){
    QString username=ui->username_lineedit->text();
    QString password=ui->password_lineedit->text();
    if(username == ""){
        QMessageBox::critical(this, "Wrong","请完整输入用户名",QMessageBox::Close);
    }else if(password == ""){
        QMessageBox::critical(this, "Wrong","请输入密码",QMessageBox::Close);
    }else if(!ui->customer_radiobutton->isChecked() && !ui->manager_radiobutton->isChecked()){
        QMessageBox::critical(this, "Wrong","请选择用户组别",QMessageBox::Close);
    }else if(DataBase::allusers.count(username) == 0){
        QMessageBox::critical(this, "Wrong","未找到该用户，请输入正确的用户名",QMessageBox::Close);
    }else if(DataBase::allusers[username][0] != password){
        QMessageBox::critical(this, "Wrong","用户密码错误，请重新输入",QMessageBox::Close);
    }else if((ui->manager_radiobutton->isChecked() && DataBase::allusers[username][1] != "管理员")){
        QMessageBox::critical(this, "Wrong","您不是管理员",QMessageBox::Close);
    }else {
        QSqlQuery query(DataBase::db);
        query.exec("SELECT * from customer where customer_name = '"+username+"'");
        while (query.next()) {
            DataBase::currentuser.clear();
            for(int i = 0; i < 5; i++){
                DataBase::currentuser.push_back(query.value(i).toString());
            }
        }
        QMessageBox::information(this, "succeed","上午好! " + username,QMessageBox::Close);
        this->close();
        if(ui->customer_radiobutton->isChecked()){
            UserWindow* child = new UserWindow;
            child->exec();
        }else{
            ManagerWindow* child = new ManagerWindow;
            child->show();
        }
    }
}

void MainWindow::userRegester(){
    User_Register* child = new User_Register;
    child->exec();
}
