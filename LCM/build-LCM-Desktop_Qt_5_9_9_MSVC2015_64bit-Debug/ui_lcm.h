/********************************************************************************
** Form generated from reading UI file 'lcm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LCM_H
#define UI_LCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LCM
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_exit;
    QTextEdit *textEdit;
    QPushButton *pushButton_poweron;
    QPushButton *pushButton_poweroff;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LCM)
    {
        if (LCM->objectName().isEmpty())
            LCM->setObjectName(QStringLiteral("LCM"));
        LCM->resize(824, 680);
        centralwidget = new QWidget(LCM);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(680, 570, 100, 50));
        pushButton_exit->setAutoRepeatInterval(100);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(340, 200, 104, 87));
        pushButton_poweron = new QPushButton(centralwidget);
        pushButton_poweron->setObjectName(QStringLiteral("pushButton_poweron"));
        pushButton_poweron->setGeometry(QRect(80, 470, 100, 50));
        pushButton_poweron->setAutoRepeatInterval(100);
        pushButton_poweroff = new QPushButton(centralwidget);
        pushButton_poweroff->setObjectName(QStringLiteral("pushButton_poweroff"));
        pushButton_poweroff->setGeometry(QRect(80, 530, 100, 50));
        pushButton_poweroff->setAutoRepeatInterval(100);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 480, 100, 50));
        pushButton->setAutoRepeatInterval(100);
        LCM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LCM);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 26));
        LCM->setMenuBar(menubar);
        statusbar = new QStatusBar(LCM);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LCM->setStatusBar(statusbar);

        retranslateUi(LCM);

        QMetaObject::connectSlotsByName(LCM);
    } // setupUi

    void retranslateUi(QMainWindow *LCM)
    {
        LCM->setWindowTitle(QApplication::translate("LCM", "LCM", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("LCM", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_poweron->setText(QApplication::translate("LCM", "\344\270\212\347\224\265", Q_NULLPTR));
        pushButton_poweroff->setText(QApplication::translate("LCM", "\344\270\213\347\224\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LCM", "\344\270\213\347\224\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LCM: public Ui_LCM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCM_H
