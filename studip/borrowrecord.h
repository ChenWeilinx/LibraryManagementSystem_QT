#ifndef BORROWRECORD_H
#define BORROWRECORD_H

#include <QWidget>
#include "managerwindow.h"
namespace Ui {
class BorrowRecord;
}

class BorrowRecord : public QWidget
{
    Q_OBJECT

public:
    explicit BorrowRecord(QWidget *parent = nullptr);
    ~BorrowRecord();

private:
    Ui::BorrowRecord *ui;
    void freshReturnTable(QString title = nullptr);
    void freshBorrowTable(QString title = nullptr);
    void filterRecords();
    void resettingRecords();
    void returnLastWindow();
};

#endif // BORROWRECORD_H
