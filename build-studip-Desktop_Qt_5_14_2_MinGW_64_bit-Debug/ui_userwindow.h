/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QPushButton *person_center_pushbutton;
    QPushButton *retrun_pushbutton;
    QLabel *label;
    QPushButton *borrow_books_pushbutton;
    QPushButton *returnbooks_pushbutton;

    void setupUi(QWidget *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QString::fromUtf8("UserWindow"));
        UserWindow->resize(612, 450);
        UserWindow->setStyleSheet(QString::fromUtf8("background-color:white"));
        person_center_pushbutton = new QPushButton(UserWindow);
        person_center_pushbutton->setObjectName(QString::fromUtf8("person_center_pushbutton"));
        person_center_pushbutton->setEnabled(true);
        person_center_pushbutton->setGeometry(QRect(500, 420, 113, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        person_center_pushbutton->setFont(font);
        person_center_pushbutton->setAutoDefault(true);
        retrun_pushbutton = new QPushButton(UserWindow);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 420, 101, 31));
        retrun_pushbutton->setFont(font);
        label = new QLabel(UserWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 541, 111));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        borrow_books_pushbutton = new QPushButton(UserWindow);
        borrow_books_pushbutton->setObjectName(QString::fromUtf8("borrow_books_pushbutton"));
        borrow_books_pushbutton->setGeometry(QRect(190, 170, 191, 42));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        borrow_books_pushbutton->setFont(font2);
        returnbooks_pushbutton = new QPushButton(UserWindow);
        returnbooks_pushbutton->setObjectName(QString::fromUtf8("returnbooks_pushbutton"));
        returnbooks_pushbutton->setGeometry(QRect(190, 300, 191, 42));
        returnbooks_pushbutton->setFont(font2);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QWidget *UserWindow)
    {
        UserWindow->setWindowTitle(QCoreApplication::translate("UserWindow", "Form", nullptr));
        person_center_pushbutton->setText(QCoreApplication::translate("UserWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("UserWindow", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("UserWindow", "WELCOME!", nullptr));
        borrow_books_pushbutton->setText(QCoreApplication::translate("UserWindow", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        returnbooks_pushbutton->setText(QCoreApplication::translate("UserWindow", "\345\233\276\344\271\246\345\275\222\350\277\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
