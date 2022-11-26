/********************************************************************************
** Form generated from reading UI file 'userretuenbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERRETUENBOOKS_H
#define UI_USERRETUENBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserRetuenBook
{
public:

    void setupUi(QWidget *UserRetuenBook)
    {
        if (UserRetuenBook->objectName().isEmpty())
            UserRetuenBook->setObjectName(QString::fromUtf8("UserRetuenBook"));
        UserRetuenBook->resize(449, 511);

        retranslateUi(UserRetuenBook);

        QMetaObject::connectSlotsByName(UserRetuenBook);
    } // setupUi

    void retranslateUi(QWidget *UserRetuenBook)
    {
        UserRetuenBook->setWindowTitle(QCoreApplication::translate("UserRetuenBook", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserRetuenBook: public Ui_UserRetuenBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERRETUENBOOKS_H
