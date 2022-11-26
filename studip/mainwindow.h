#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QDebug>
#include<QString>
#include <QSqlQuery>
#include<QSet>
#include<QMessageBox>
#include<database.h>
#include "userwindow.h"
#include "user_register.h"
#include "managerwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void login(); //用户登录
    void userRegester(); //用户注册
};
#endif // MAINWINDOW_H
