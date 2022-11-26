#ifndef MANAGERINPUTBOOKS_H
#define MANAGERINPUTBOOKS_H

#include <QWidget>
#include<QSqlDatabase>
#include "database.h"
#include "managerwindow.h"
namespace Ui {
class ManagerInputBooks;
}

class ManagerInputBooks : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerInputBooks(QWidget *parent = nullptr);
    ~ManagerInputBooks();

private:
    Ui::ManagerInputBooks *ui;
private slots:
    void inputBooks();
    void cancelInoutBooks();
};

#endif // MANAGERINPUTBOOKS_H
