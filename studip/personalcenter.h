#ifndef PERSONALCENTER_H
#define PERSONALCENTER_H

#include <QWidget>
#include "userwindow.h"
#include "managerwindow.h"
#include "userborrowbooks.h"
#include "userreturnbooks.h"
#include "database.h"
#include<QString>
namespace Ui {
class PersonalCenter;
}

class PersonalCenter : public QWidget
{
    Q_OBJECT

public:
    static const short USERWINDOW = 0;
    static const short MANAGERWINDOW = 1;
    static const short USERBORROWBOOKS = 2;
    static const short USERRETURNBOOKS = 3;

    explicit PersonalCenter(int type,QWidget *parent = nullptr);
    explicit PersonalCenter(int type,QString item, QString itemname,QWidget *parent = nullptr);
    ~PersonalCenter();

private slots:
    void alterInformatioin(); //改变用户信息
    void returnLastWindow();  //返回上一级目录
private:
    Ui::PersonalCenter *ui;
    int type; //返回上级目录的类型
    QString item;
    QString itemname;
    void freshPersonalCenter(); //刷新个人中心数据
    void freshBorrowBook(); //刷新借阅表
    void freshReturnBook(); //刷新还书表

};

#endif // PERSONALCENTER_H
