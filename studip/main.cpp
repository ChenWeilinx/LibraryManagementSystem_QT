#include "mainwindow.h"
#include "user_register.h"
#include <QApplication>
#include "usermanage.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataBase::openDatabase();

    DataBase::initUsers();
    MainWindow w;
    w.show();

//    UserBorrowBooks s;
//    s.show();

//    User_Register s;
//    s.show();

//    userManage s;
//    s.show();

    return a.exec();
}
