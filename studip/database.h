#ifndef DATABASE_H
#define DATABASE_H

#include<QSqlDatabase>
#include<QSet>
#include<QDebug>
#include <QSqlQuery>
#include<QMessageBox>
#include<QMap>
#include<QSqlError>
class DataBase
{
public:
    DataBase();
    static const int USERNAME = 0;
    static const int GENDER = 1;
    static const int PASSWORD = 2;
    static const int CURATE_DATE = 3;
    static const int TYPE = 4;
    static void initUsers();
    static void openDatabase();
//    static QSet<QString>* users;
    static QMap<QString,QVector<QString>> allusers; //所有用户部分信息
    static QVector<QString> currentuser;   //当前用户所有信息
    static QSqlDatabase db;
private:
};
#endif // DATABASE_H
