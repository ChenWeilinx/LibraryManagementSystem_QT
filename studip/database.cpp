#include "database.h"

DataBase::DataBase()
{
}

QMap<QString,QVector<QString>> DataBase::allusers; //所有用户部分信息

QVector<QString> DataBase:: currentuser;   //当前用户所有信息

QSqlDatabase DataBase::db; //数据库


void DataBase::openDatabase(){
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");      //连接数据库主机名
    db.setPort(3306);                 //连接数据库端口号，与设置一致
    db.setDatabaseName("book_manager_system");      //连接数据库名，与设置一致
    db.setUserName("root");          //数据库用户名，与设置一致
    db.setPassword("123456");    //数据库密码，与设置一致
    db.open(); //打开数据库
}

void DataBase::initUsers(){
    allusers.clear();
    QSqlQuery query(db);
    if(query.exec("SELECT customer_name, customer_password, customer_type FROM customer")){
        qDebug()<<"执行成功";
        while(query.next()){
            QString username = query.value(0).toString();
            QString password = query.value(1).toString();
            QString type = query.value(2).toString();
            allusers[username] = {password,type};
        }
    }
    qDebug()<<"用户数量"<<allusers.size();
}

