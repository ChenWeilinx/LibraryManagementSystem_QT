/********************************************************************************
** Form generated from reading UI file 'userborrowbookssearchresult.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBORROWBOOKSSEARCHRESULT_H
#define UI_USERBORROWBOOKSSEARCHRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserBorrowBooksSearchResult
{
public:
    QLabel *booksearchresult_pushbutton;
    QTableWidget *tableWidget;
    QPushButton *retrun_pushbutton;
    QPushButton *personalcenter_pushbutton;
    QPushButton *borrow_pushbutton;
    QComboBox *comboBox;
    QRadioButton *select_radioButton;
    QPushButton *freshtable_pushbutton;

    void setupUi(QWidget *UserBorrowBooksSearchResult)
    {
        if (UserBorrowBooksSearchResult->objectName().isEmpty())
            UserBorrowBooksSearchResult->setObjectName(QString::fromUtf8("UserBorrowBooksSearchResult"));
        UserBorrowBooksSearchResult->resize(741, 288);
        UserBorrowBooksSearchResult->setStyleSheet(QString::fromUtf8("background-color:white"));
        booksearchresult_pushbutton = new QLabel(UserBorrowBooksSearchResult);
        booksearchresult_pushbutton->setObjectName(QString::fromUtf8("booksearchresult_pushbutton"));
        booksearchresult_pushbutton->setGeometry(QRect(170, 0, 351, 91));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(booksearchresult_pushbutton->sizePolicy().hasHeightForWidth());
        booksearchresult_pushbutton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        booksearchresult_pushbutton->setFont(font);
        booksearchresult_pushbutton->setFrameShape(QFrame::NoFrame);
        booksearchresult_pushbutton->setFrameShadow(QFrame::Plain);
        booksearchresult_pushbutton->setTextFormat(Qt::AutoText);
        booksearchresult_pushbutton->setScaledContents(false);
        booksearchresult_pushbutton->setAlignment(Qt::AlignCenter);
        booksearchresult_pushbutton->setWordWrap(false);
        tableWidget = new QTableWidget(UserBorrowBooksSearchResult);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 741, 101));
        retrun_pushbutton = new QPushButton(UserBorrowBooksSearchResult);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 260, 101, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        retrun_pushbutton->setFont(font1);
        personalcenter_pushbutton = new QPushButton(UserBorrowBooksSearchResult);
        personalcenter_pushbutton->setObjectName(QString::fromUtf8("personalcenter_pushbutton"));
        personalcenter_pushbutton->setEnabled(true);
        personalcenter_pushbutton->setGeometry(QRect(640, 260, 101, 31));
        personalcenter_pushbutton->setFont(font1);
        borrow_pushbutton = new QPushButton(UserBorrowBooksSearchResult);
        borrow_pushbutton->setObjectName(QString::fromUtf8("borrow_pushbutton"));
        borrow_pushbutton->setEnabled(true);
        borrow_pushbutton->setGeometry(QRect(640, 210, 101, 31));
        borrow_pushbutton->setFont(font1);
        comboBox = new QComboBox(UserBorrowBooksSearchResult);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(432, 210, 201, 31));
        select_radioButton = new QRadioButton(UserBorrowBooksSearchResult);
        select_radioButton->setObjectName(QString::fromUtf8("select_radioButton"));
        select_radioButton->setGeometry(QRect(330, 210, 91, 31));
        freshtable_pushbutton = new QPushButton(UserBorrowBooksSearchResult);
        freshtable_pushbutton->setObjectName(QString::fromUtf8("freshtable_pushbutton"));
        freshtable_pushbutton->setEnabled(true);
        freshtable_pushbutton->setGeometry(QRect(0, 210, 101, 31));
        freshtable_pushbutton->setFont(font1);

        retranslateUi(UserBorrowBooksSearchResult);

        QMetaObject::connectSlotsByName(UserBorrowBooksSearchResult);
    } // setupUi

    void retranslateUi(QWidget *UserBorrowBooksSearchResult)
    {
        UserBorrowBooksSearchResult->setWindowTitle(QCoreApplication::translate("UserBorrowBooksSearchResult", "Form", nullptr));
        booksearchresult_pushbutton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\350\277\224\345\233\236", nullptr));
        personalcenter_pushbutton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        borrow_pushbutton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\345\200\237\351\230\205", nullptr));
        select_radioButton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\351\200\211\346\213\251\345\205\250\351\203\250", nullptr));
        freshtable_pushbutton->setText(QCoreApplication::translate("UserBorrowBooksSearchResult", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserBorrowBooksSearchResult: public Ui_UserBorrowBooksSearchResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBORROWBOOKSSEARCHRESULT_H
