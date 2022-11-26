/********************************************************************************
** Form generated from reading UI file 'userreturnbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERRETURNBOOKS_H
#define UI_USERRETURNBOOKS_H

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

class Ui_UserReturnBooks
{
public:
    QPushButton *personalcenter_pushbutton;
    QPushButton *freshtable_pushbutton;
    QComboBox *comboBox;
    QRadioButton *select_radioButton;
    QLabel *label;
    QPushButton *returnbook_pushbutton;
    QTableWidget *tableWidget;
    QPushButton *retrun_pushbutton;

    void setupUi(QWidget *UserReturnBooks)
    {
        if (UserReturnBooks->objectName().isEmpty())
            UserReturnBooks->setObjectName(QString::fromUtf8("UserReturnBooks"));
        UserReturnBooks->resize(581, 299);
        personalcenter_pushbutton = new QPushButton(UserReturnBooks);
        personalcenter_pushbutton->setObjectName(QString::fromUtf8("personalcenter_pushbutton"));
        personalcenter_pushbutton->setEnabled(true);
        personalcenter_pushbutton->setGeometry(QRect(480, 270, 101, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        personalcenter_pushbutton->setFont(font);
        freshtable_pushbutton = new QPushButton(UserReturnBooks);
        freshtable_pushbutton->setObjectName(QString::fromUtf8("freshtable_pushbutton"));
        freshtable_pushbutton->setEnabled(true);
        freshtable_pushbutton->setGeometry(QRect(0, 220, 101, 31));
        freshtable_pushbutton->setFont(font);
        comboBox = new QComboBox(UserReturnBooks);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(292, 220, 181, 31));
        select_radioButton = new QRadioButton(UserReturnBooks);
        select_radioButton->setObjectName(QString::fromUtf8("select_radioButton"));
        select_radioButton->setGeometry(QRect(140, 220, 111, 31));
        label = new QLabel(UserReturnBooks);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 521, 91));
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
        returnbook_pushbutton = new QPushButton(UserReturnBooks);
        returnbook_pushbutton->setObjectName(QString::fromUtf8("returnbook_pushbutton"));
        returnbook_pushbutton->setEnabled(true);
        returnbook_pushbutton->setGeometry(QRect(480, 220, 101, 31));
        returnbook_pushbutton->setFont(font);
        tableWidget = new QTableWidget(UserReturnBooks);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 110, 581, 101));
        retrun_pushbutton = new QPushButton(UserReturnBooks);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 270, 101, 31));
        retrun_pushbutton->setFont(font);

        retranslateUi(UserReturnBooks);

        QMetaObject::connectSlotsByName(UserReturnBooks);
    } // setupUi

    void retranslateUi(QWidget *UserReturnBooks)
    {
        UserReturnBooks->setWindowTitle(QCoreApplication::translate("UserReturnBooks", "Form", nullptr));
        personalcenter_pushbutton->setText(QCoreApplication::translate("UserReturnBooks", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        freshtable_pushbutton->setText(QCoreApplication::translate("UserReturnBooks", "\345\210\267\346\226\260", nullptr));
        select_radioButton->setText(QCoreApplication::translate("UserReturnBooks", "\344\270\200\351\224\256\345\275\222\350\277\230\345\205\250\351\203\250", nullptr));
        label->setText(QCoreApplication::translate("UserReturnBooks", "\345\233\276\344\271\246\345\275\222\350\277\230", nullptr));
        returnbook_pushbutton->setText(QCoreApplication::translate("UserReturnBooks", "\345\275\222\350\277\230", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("UserReturnBooks", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserReturnBooks: public Ui_UserReturnBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERRETURNBOOKS_H
