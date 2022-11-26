#ifndef USERMANAGE_H
#define USERMANAGE_H

#include <QWidget>
#include<QStandardItemModel>
#include<QSqlDatabase>
#include<database.h>
#include<QSqlQuery>
#include<QSqlRecord>
#include "managerwindow.h"
namespace Ui {
class userManage;
}

class userManage : public QWidget
{
    Q_OBJECT

public:
    explicit userManage(QWidget *parent = nullptr);
    ~userManage();


private slots:
    void freshTable();
    void returnLastWindow();
    void deleteUser();
private:
    Ui::userManage *ui;
    QString deleteword = "5555";
};

#endif // USERMANAGE_H
