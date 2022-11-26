#ifndef USERRETURNBOOKS_H
#define USERRETURNBOOKS_H

#include <QWidget>
#include "userwindow.h"
#include "personalcenter.h"
namespace Ui {
class UserReturnBooks;
}

class UserReturnBooks : public QWidget
{
    Q_OBJECT

public:
    explicit UserReturnBooks(QWidget *parent = nullptr);
    ~UserReturnBooks();

private:
    Ui::UserReturnBooks *ui;

private slots:
    void returnLastWindow();
    void enterPersonalCenter();
    void returnBooks();
    void freshTable();
};

#endif // USERRETURNBOOKS_H
