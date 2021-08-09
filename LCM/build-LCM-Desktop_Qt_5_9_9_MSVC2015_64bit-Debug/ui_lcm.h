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
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LCM)
    {
        if (LCM->objectName().isEmpty())
            LCM->setObjectName(QStringLiteral("LCM"));
        LCM->resize(800, 600);
        centralwidget = new QWidget(LCM);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 260, 93, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(340, 200, 104, 87));
        LCM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LCM);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        pushButton->setText(QApplication::translate("LCM", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LCM: public Ui_LCM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCM_H
