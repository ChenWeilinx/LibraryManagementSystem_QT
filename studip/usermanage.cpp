#include "usermanage.h"
#include "ui_usermanage.h"

userManage::userManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userManage)
{
    ui->setupUi(this);

    freshTable();

    //管理员提交刷新申请
    connect(ui->fresh_pushbutton,&QPushButton::clicked,this,&userManage::freshTable);
    //用户提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&userManage::returnLastWindow);
    //管理员提交删除用户申请
    connect(ui->delete_pushbutton,&QPushButton::clicked,this,&userManage::deleteUser);
    //管理员提交进入退出申请
    connect(ui->exit_pushbutton,&QPushButton::clicked,this,&userManage::close);
}

userManage::~userManage()
{
    delete ui;
}

void userManage::freshTable(){

    QStringList header = {"姓名","性别","密码","创建日期","组别"};

    QSqlQuery query(DataBase::db);
    if(query.exec("SELECT * from customer where customer_type = '用户'")){
        qDebug()<<"MainWindow:: 执行成功";
        int colcnt = query.record().count();

        ui->user_tableview->setColumnCount(colcnt);
        ui->user_tableview->setRowCount(query.size());
        ui->user_tableview->setHorizontalHeaderLabels(header);
        short rowcnt = 0;
        while (query.next()) {
            for(int i = 0; i < colcnt; i++){
                /*setItem设置条目栏中的一个格子的信息*/
                QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
                // 表格内元素设置字体居中
                item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
                ui->user_tableview->setItem(rowcnt, i, item);
            }
            rowcnt++;
        }
    }else{
        qDebug()<<"userManage:: 执行失败";
    }

}

void userManage::returnLastWindow(){
    this->close();
    ManagerWindow* father = new ManagerWindow;
    father->show();
}

void userManage::deleteUser(){
    QString username   = ui->delete_lineEdit->text();
    QString deleteword = ui->retry_lineEdit->text();
    if(DataBase::allusers.count(username) == 0){
        QMessageBox::critical(this, "Wrong","用户不存在，请重新输入用户名",QMessageBox::Close);
    }else if(deleteword != this->deleteword){
        QMessageBox::critical(this, "Wrong","验证码错误",QMessageBox::Close);
    }else{
        QSqlQuery query(DataBase::db);
        QString sqltr = "DELETE FROM customer where customer_name = '" + username + "'";
        if(query.exec(sqltr)){
            QMessageBox::information(this, "succeed","删除成功",QMessageBox::Close);
            freshTable(); //刷新表
        }else{
            QMessageBox::critical(this, "Wrong","删除失败",QMessageBox::Close);
        }
    }
}

