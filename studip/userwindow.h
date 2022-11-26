#ifndef USERWINDOW_H
#define USERWINDOW_H

#include<QWidget>
#include"mainwindow.h"
#include"database.h"
#include"userborrowbooks.h"
#include "ui_mainwindow.h"
#include "personalcenter.h"
namespace Ui {
class UserWindow;
}

class UserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private:
    Ui::UserWindow *ui;
private slots:
    void returnBooks();
    void borrowBooks();
    void returnLastWindow();
    void enterPersonalCenter();
};

#endif // USERWINDOW_H
