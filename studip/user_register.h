#ifndef USER_REGISTER_H
#define USER_REGISTER_H

#include <QDialog>
#include<QString>
#include<QMessageBox>
#include<QSet>
#include<QSqlDatabase>
#include<database.h>
#include <QSqlQuery>
namespace Ui {
class User_Register;
}

class User_Register : public QDialog
{
    Q_OBJECT

public:
    explicit User_Register(QWidget *parent = nullptr);
    ~User_Register();

private:
    Ui::User_Register *ui;

private slots:
    void user_register();
};

#endif // USER_REGISTER_H
