/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerWindow
{
public:
    QPushButton *retrun_pushbutton;
    QLabel *label;
    QPushButton *person_center_pushbutton;
    QPushButton *usermanage_pushButton;
    QPushButton *inputbooks_pushButton;
    QPushButton *borrow_pushButton;

    void setupUi(QWidget *ManagerWindow)
    {
        if (ManagerWindow->objectName().isEmpty())
            ManagerWindow->setObjectName(QString::fromUtf8("ManagerWindow"));
        ManagerWindow->resize(570, 440);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ManagerWindow->sizePolicy().hasHeightForWidth());
        ManagerWindow->setSizePolicy(sizePolicy);
        ManagerWindow->setStyleSheet(QString::fromUtf8("background-color:white"));
        retrun_pushbutton = new QPushButton(ManagerWindow);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 410, 101, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        retrun_pushbutton->setFont(font);
        label = new QLabel(ManagerWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 461, 111));
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
        person_center_pushbutton = new QPushButton(ManagerWindow);
        person_center_pushbutton->setObjectName(QString::fromUtf8("person_center_pushbutton"));
        person_center_pushbutton->setEnabled(true);
        person_center_pushbutton->setGeometry(QRect(460, 410, 113, 31));
        person_center_pushbutton->setFont(font);
        person_center_pushbutton->setAutoDefault(true);
        usermanage_pushButton = new QPushButton(ManagerWindow);
        usermanage_pushButton->setObjectName(QString::fromUtf8("usermanage_pushButton"));
        usermanage_pushButton->setGeometry(QRect(200, 150, 161, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        usermanage_pushButton->setFont(font2);
        inputbooks_pushButton = new QPushButton(ManagerWindow);
        inputbooks_pushButton->setObjectName(QString::fromUtf8("inputbooks_pushButton"));
        inputbooks_pushButton->setGeometry(QRect(200, 220, 161, 41));
        inputbooks_pushButton->setFont(font2);
        borrow_pushButton = new QPushButton(ManagerWindow);
        borrow_pushButton->setObjectName(QString::fromUtf8("borrow_pushButton"));
        borrow_pushButton->setGeometry(QRect(200, 290, 161, 41));
        borrow_pushButton->setFont(font2);

        retranslateUi(ManagerWindow);

        QMetaObject::connectSlotsByName(ManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *ManagerWindow)
    {
        ManagerWindow->setWindowTitle(QCoreApplication::translate("ManagerWindow", "Form", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("ManagerWindow", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("ManagerWindow", "WELCOME!", nullptr));
        person_center_pushbutton->setText(QCoreApplication::translate("ManagerWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        usermanage_pushButton->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        inputbooks_pushButton->setText(QCoreApplication::translate("ManagerWindow", "\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        borrow_pushButton->setText(QCoreApplication::translate("ManagerWindow", "\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerWindow: public Ui_ManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
