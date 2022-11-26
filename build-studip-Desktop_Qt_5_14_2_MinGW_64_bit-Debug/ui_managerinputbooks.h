/********************************************************************************
** Form generated from reading UI file 'managerinputbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERINPUTBOOKS_H
#define UI_MANAGERINPUTBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerInputBooks
{
public:
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *author_lineedit;
    QLabel *label_6;
    QLineEdit *booktype_lineedit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *publisher_lineedit;
    QLineEdit *all_count_lineedit;
    QLabel *label_5;
    QLineEdit *title_lineedit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *comfirm_pushbutton;
    QPushButton *cancel_pushbutton;

    void setupUi(QWidget *ManagerInputBooks)
    {
        if (ManagerInputBooks->objectName().isEmpty())
            ManagerInputBooks->setObjectName(QString::fromUtf8("ManagerInputBooks"));
        ManagerInputBooks->resize(342, 375);
        ManagerInputBooks->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_3 = new QLabel(ManagerInputBooks);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 10, 141, 61));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font);
        label_3->setMouseTracking(false);
        label_3->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(ManagerInputBooks);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(40, 80, 281, 251));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        author_lineedit = new QLineEdit(widget_2);
        author_lineedit->setObjectName(QString::fromUtf8("author_lineedit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(author_lineedit->sizePolicy().hasHeightForWidth());
        author_lineedit->setSizePolicy(sizePolicy1);
        author_lineedit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(author_lineedit, 1, 2, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        booktype_lineedit = new QLineEdit(widget_2);
        booktype_lineedit->setObjectName(QString::fromUtf8("booktype_lineedit"));
        sizePolicy1.setHeightForWidth(booktype_lineedit->sizePolicy().hasHeightForWidth());
        booktype_lineedit->setSizePolicy(sizePolicy1);
        booktype_lineedit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(booktype_lineedit, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        publisher_lineedit = new QLineEdit(widget_2);
        publisher_lineedit->setObjectName(QString::fromUtf8("publisher_lineedit"));
        sizePolicy1.setHeightForWidth(publisher_lineedit->sizePolicy().hasHeightForWidth());
        publisher_lineedit->setSizePolicy(sizePolicy1);
        publisher_lineedit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(publisher_lineedit, 2, 2, 1, 1);

        all_count_lineedit = new QLineEdit(widget_2);
        all_count_lineedit->setObjectName(QString::fromUtf8("all_count_lineedit"));
        sizePolicy1.setHeightForWidth(all_count_lineedit->sizePolicy().hasHeightForWidth());
        all_count_lineedit->setSizePolicy(sizePolicy1);
        all_count_lineedit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(all_count_lineedit, 4, 2, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        title_lineedit = new QLineEdit(widget_2);
        title_lineedit->setObjectName(QString::fromUtf8("title_lineedit"));

        gridLayout->addWidget(title_lineedit, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        comfirm_pushbutton = new QPushButton(ManagerInputBooks);
        comfirm_pushbutton->setObjectName(QString::fromUtf8("comfirm_pushbutton"));
        comfirm_pushbutton->setGeometry(QRect(0, 350, 93, 24));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        comfirm_pushbutton->setFont(font1);
        comfirm_pushbutton->setCheckable(false);
        cancel_pushbutton = new QPushButton(ManagerInputBooks);
        cancel_pushbutton->setObjectName(QString::fromUtf8("cancel_pushbutton"));
        cancel_pushbutton->setGeometry(QRect(240, 350, 101, 24));
        cancel_pushbutton->setFont(font1);

        retranslateUi(ManagerInputBooks);

        QMetaObject::connectSlotsByName(ManagerInputBooks);
    } // setupUi

    void retranslateUi(QWidget *ManagerInputBooks)
    {
        ManagerInputBooks->setWindowTitle(QCoreApplication::translate("ManagerInputBooks", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ManagerInputBooks", "\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        label_6->setText(QCoreApplication::translate("ManagerInputBooks", "\346\225\260\351\207\217  \357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ManagerInputBooks", "\344\275\234\350\200\205  \357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("ManagerInputBooks", "\345\207\272\347\211\210\347\244\276\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("ManagerInputBooks", "\347\261\273\345\210\253  \357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ManagerInputBooks", "\344\271\246\345\220\215  \357\274\232", nullptr));
        comfirm_pushbutton->setText(QCoreApplication::translate("ManagerInputBooks", "\347\241\256\345\256\232", nullptr));
        cancel_pushbutton->setText(QCoreApplication::translate("ManagerInputBooks", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerInputBooks: public Ui_ManagerInputBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERINPUTBOOKS_H
