#include "user_register.h"
#include "ui_user_register.h"
User_Register::User_Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_Register)
{
    ui->setupUi(this);
    ui->gender_comboBox->setEditable(false); //设置不可编辑
    //提交注册申请
    connect(ui->register_pushButton_2,&QPushButton::clicked,this,&User_Register::user_register);
    //提交返回申请
    connect(ui->cancel_pushbutton_2,&QPushButton::clicked,this,&User_Register::close);
}

User_Register::~User_Register()
{
    delete ui;
}

void User_Register::user_register(){
    QString username=ui->username_lineedit_2->text(); //获取用户输入的姓名
    QString password=ui->password_lineedit_2->text(); //获取用户输入的密码
    QString gender = ui->gender_comboBox->currentText(); //获取用户选择的性别
    if(username == ""){
        QMessageBox::critical(this, "Wrong","请完整输入用户名",QMessageBox::Close);
    }else if(password == ""){
        QMessageBox::critical(this, "Wrong","请输入密码",QMessageBox::Close);
    }else if(password.size() > 12){
        QMessageBox::critical(this, "Wrong","密码过长，请输入12位字符以内的密码",QMessageBox::Close);
    }else if(DataBase::allusers.count(username) != 0){
        QMessageBox::critical(this, "Wrong","用户已存在，请重新输入用户名",QMessageBox::Close);
    }else{
        QSqlQuery query(DataBase::db);
        QString str = "INSERT INTO customer(customer_name,gender,customer_password,create_date,customer_type)";
        str.append(" VALUES('"+username+"',"+"'"+gender+"',"+"'"+password+"',CURRENT_DATE(),'用户')");
        if(query.exec(str)){
            QMessageBox::information(this, "succeed","注册成功",QMessageBox::Close);
            DataBase::initUsers();
        }else{
            QMessageBox::critical(this, "Wrong","注册失败",QMessageBox::Close);
        }
    }
}

