#ifndef USERBORROWBOOKS_H
#define USERBORROWBOOKS_H

#include<QWidget>
#include<QVector>
#include "database.h"
#include<QComboBox>
#include"userwindow.h"
namespace Ui {
class UserBorrowBooks;
}

class UserBorrowBooks : public QWidget
{
    Q_OBJECT

public:
    explicit UserBorrowBooks(QWidget *parent = nullptr);
    ~UserBorrowBooks();

private slots:
    void filterBooks();
    void searchBooks();
    void returnLastWindow();
    void resettingAllCombinBox();
    void borrowBooks();
    void enterPersonalCenter();
private:
    Ui::UserBorrowBooks *ui;
    QVector<QComboBox*> vec;
    QVector<QString> str;
    QVector<QString> str_en;
    void resettingAllControls(QSqlQuery&query, bool additem = false);
};

#endif // USERBORROWBOOKS_H
