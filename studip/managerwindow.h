#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>
#include "usermanage.h"
#include "mainwindow.h"
#include "managerinputbooks.h"
#include "borrowrecord.h"
namespace Ui {
class ManagerWindow;
}

class ManagerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = nullptr);
    ~ManagerWindow();

private slots:
    void inputBooks();
    void borrowManage();
    void _userManage();
    void returnLastWindow();
    void enterPersonalCenter();
private:
    Ui::ManagerWindow *ui;
};

#endif // MANAGERWINDOW_H
