/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *system_title_label;
    QLabel *login_label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_pushbutton;
    QPushButton *exit_pushbutton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *username_label;
    QLabel *password_label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *password_lineedit;
    QLineEdit *username_lineedit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *customer_radiobutton;
    QRadioButton *manager_radiobutton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *register_pushbutton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(576, 484);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:white"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        system_title_label = new QLabel(centralwidget);
        system_title_label->setObjectName(QString::fromUtf8("system_title_label"));
        system_title_label->setEnabled(true);
        system_title_label->setGeometry(QRect(140, 40, 391, 91));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(system_title_label->sizePolicy().hasHeightForWidth());
        system_title_label->setSizePolicy(sizePolicy);
        system_title_label->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        system_title_label->setFont(font);
        system_title_label->setMouseTracking(false);
        system_title_label->setLayoutDirection(Qt::LeftToRight);
        login_label = new QLabel(centralwidget);
        login_label->setObjectName(QString::fromUtf8("login_label"));
        login_label->setGeometry(QRect(230, 150, 132, 40));
        sizePolicy.setHeightForWidth(login_label->sizePolicy().hasHeightForWidth());
        login_label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(20);
        login_label->setFont(font1);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(180, 400, 282, 46));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        login_pushbutton = new QPushButton(widget_3);
        login_pushbutton->setObjectName(QString::fromUtf8("login_pushbutton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/qq.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_pushbutton->setIcon(icon);

        horizontalLayout_3->addWidget(login_pushbutton);

        exit_pushbutton = new QPushButton(widget_3);
        exit_pushbutton->setObjectName(QString::fromUtf8("exit_pushbutton"));

        horizontalLayout_3->addWidget(exit_pushbutton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(150, 210, 261, 121));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        username_label = new QLabel(widget_5);
        username_label->setObjectName(QString::fromUtf8("username_label"));

        gridLayout->addWidget(username_label, 0, 1, 1, 1);

        password_label = new QLabel(widget_5);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        gridLayout->addWidget(password_label, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        password_lineedit = new QLineEdit(widget_5);
        password_lineedit->setObjectName(QString::fromUtf8("password_lineedit"));
        password_lineedit->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light'; \n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));
        password_lineedit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_lineedit, 1, 2, 1, 1);

        username_lineedit = new QLineEdit(widget_5);
        username_lineedit->setObjectName(QString::fromUtf8("username_lineedit"));
        username_lineedit->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light'; \n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));

        gridLayout->addWidget(username_lineedit, 0, 2, 1, 1);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(280, 350, 231, 38));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        customer_radiobutton = new QRadioButton(widget_4);
        customer_radiobutton->setObjectName(QString::fromUtf8("customer_radiobutton"));

        horizontalLayout_4->addWidget(customer_radiobutton);

        manager_radiobutton = new QRadioButton(widget_4);
        manager_radiobutton->setObjectName(QString::fromUtf8("manager_radiobutton"));

        horizontalLayout_4->addWidget(manager_radiobutton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        register_pushbutton = new QPushButton(centralwidget);
        register_pushbutton->setObjectName(QString::fromUtf8("register_pushbutton"));
        register_pushbutton->setGeometry(QRect(420, 460, 161, 28));
        register_pushbutton->setStyleSheet(QString::fromUtf8("color:red;\n"
"text-decoration: underline;\n"
"border:none"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        system_title_label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        login_label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        login_pushbutton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        exit_pushbutton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        username_label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201  \357\274\232", nullptr));
        password_lineedit->setText(QString());
        customer_radiobutton->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267", nullptr));
        manager_radiobutton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        register_pushbutton->setText(QCoreApplication::translate("MainWindow", "\350\277\230\346\262\241\346\234\211\350\264\246\346\210\267\357\274\237\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
