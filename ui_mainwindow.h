/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *del_applications;
    QTableView *APPLICATIONS;
    QPushButton *up_applications;
    QPushButton *add_applications;
    QLabel *label;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPushButton *del_cash_register;
    QPushButton *add_cash_register;
    QPushButton *up_cash_register;
    QTableView *CASH_REGISTER;
    QLabel *label_2;
    QWidget *tab_7;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QPushButton *add_game_schedule;
    QPushButton *up_game_schedule;
    QPushButton *del_game_schedule;
    QTableView *GAME_SCHEDULE;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QPushButton *del_service;
    QTableView *SERVICE;
    QPushButton *up_service;
    QPushButton *add_service;
    QLabel *label_6;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QPushButton *up_goods;
    QLabel *label_5;
    QPushButton *del_goods;
    QPushButton *add_goods;
    QTableView *GOODS;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QPushButton *add_equipment;
    QPushButton *del_equipment;
    QPushButton *up_equipment;
    QTableView *EQUIPMENT;
    QLabel *label_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QPushButton *up_clients;
    QPushButton *add_clients;
    QPushButton *del_clients;
    QTableView *CLIENTS;
    QLabel *label_3;
    QWidget *tab_8;
    QGridLayout *gridLayout_9;
    QLabel *label_9;
    QPushButton *add_Instructor;
    QPushButton *up_Instructor;
    QPushButton *del_Instructor;
    QTableView *INSTRUCTOR;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1186, 687);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(24);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        del_applications = new QPushButton(tab);
        del_applications->setObjectName(QString::fromUtf8("del_applications"));

        gridLayout_2->addWidget(del_applications, 2, 2, 1, 1);

        APPLICATIONS = new QTableView(tab);
        APPLICATIONS->setObjectName(QString::fromUtf8("APPLICATIONS"));

        gridLayout_2->addWidget(APPLICATIONS, 1, 0, 1, 3);

        up_applications = new QPushButton(tab);
        up_applications->setObjectName(QString::fromUtf8("up_applications"));

        gridLayout_2->addWidget(up_applications, 2, 1, 1, 1);

        add_applications = new QPushButton(tab);
        add_applications->setObjectName(QString::fromUtf8("add_applications"));

        gridLayout_2->addWidget(add_applications, 2, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        del_cash_register = new QPushButton(tab_2);
        del_cash_register->setObjectName(QString::fromUtf8("del_cash_register"));

        gridLayout_3->addWidget(del_cash_register, 2, 2, 1, 1);

        add_cash_register = new QPushButton(tab_2);
        add_cash_register->setObjectName(QString::fromUtf8("add_cash_register"));

        gridLayout_3->addWidget(add_cash_register, 2, 0, 1, 1);

        up_cash_register = new QPushButton(tab_2);
        up_cash_register->setObjectName(QString::fromUtf8("up_cash_register"));

        gridLayout_3->addWidget(up_cash_register, 2, 1, 1, 1);

        CASH_REGISTER = new QTableView(tab_2);
        CASH_REGISTER->setObjectName(QString::fromUtf8("CASH_REGISTER"));

        gridLayout_3->addWidget(CASH_REGISTER, 1, 0, 1, 3);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_8 = new QGridLayout(tab_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        add_game_schedule = new QPushButton(tab_7);
        add_game_schedule->setObjectName(QString::fromUtf8("add_game_schedule"));

        gridLayout_8->addWidget(add_game_schedule, 2, 0, 1, 1);

        up_game_schedule = new QPushButton(tab_7);
        up_game_schedule->setObjectName(QString::fromUtf8("up_game_schedule"));

        gridLayout_8->addWidget(up_game_schedule, 2, 1, 1, 1);

        del_game_schedule = new QPushButton(tab_7);
        del_game_schedule->setObjectName(QString::fromUtf8("del_game_schedule"));

        gridLayout_8->addWidget(del_game_schedule, 2, 2, 1, 1);

        GAME_SCHEDULE = new QTableView(tab_7);
        GAME_SCHEDULE->setObjectName(QString::fromUtf8("GAME_SCHEDULE"));

        gridLayout_8->addWidget(GAME_SCHEDULE, 1, 0, 1, 3);

        tabWidget->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        del_service = new QPushButton(tab_6);
        del_service->setObjectName(QString::fromUtf8("del_service"));

        gridLayout_7->addWidget(del_service, 2, 2, 1, 1);

        SERVICE = new QTableView(tab_6);
        SERVICE->setObjectName(QString::fromUtf8("SERVICE"));

        gridLayout_7->addWidget(SERVICE, 1, 0, 1, 3);

        up_service = new QPushButton(tab_6);
        up_service->setObjectName(QString::fromUtf8("up_service"));

        gridLayout_7->addWidget(up_service, 2, 1, 1, 1);

        add_service = new QPushButton(tab_6);
        add_service->setObjectName(QString::fromUtf8("add_service"));

        gridLayout_7->addWidget(add_service, 2, 0, 1, 1);

        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        up_goods = new QPushButton(tab_5);
        up_goods->setObjectName(QString::fromUtf8("up_goods"));

        gridLayout_6->addWidget(up_goods, 2, 1, 1, 1);

        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        del_goods = new QPushButton(tab_5);
        del_goods->setObjectName(QString::fromUtf8("del_goods"));

        gridLayout_6->addWidget(del_goods, 2, 2, 1, 1);

        add_goods = new QPushButton(tab_5);
        add_goods->setObjectName(QString::fromUtf8("add_goods"));

        gridLayout_6->addWidget(add_goods, 2, 0, 1, 1);

        GOODS = new QTableView(tab_5);
        GOODS->setObjectName(QString::fromUtf8("GOODS"));

        gridLayout_6->addWidget(GOODS, 1, 0, 1, 3);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        add_equipment = new QPushButton(tab_4);
        add_equipment->setObjectName(QString::fromUtf8("add_equipment"));

        gridLayout_5->addWidget(add_equipment, 2, 0, 1, 1);

        del_equipment = new QPushButton(tab_4);
        del_equipment->setObjectName(QString::fromUtf8("del_equipment"));

        gridLayout_5->addWidget(del_equipment, 2, 2, 1, 1);

        up_equipment = new QPushButton(tab_4);
        up_equipment->setObjectName(QString::fromUtf8("up_equipment"));

        gridLayout_5->addWidget(up_equipment, 2, 1, 1, 1);

        EQUIPMENT = new QTableView(tab_4);
        EQUIPMENT->setObjectName(QString::fromUtf8("EQUIPMENT"));

        gridLayout_5->addWidget(EQUIPMENT, 1, 0, 1, 3);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        up_clients = new QPushButton(tab_3);
        up_clients->setObjectName(QString::fromUtf8("up_clients"));

        gridLayout_4->addWidget(up_clients, 2, 1, 1, 1);

        add_clients = new QPushButton(tab_3);
        add_clients->setObjectName(QString::fromUtf8("add_clients"));

        gridLayout_4->addWidget(add_clients, 2, 0, 1, 1);

        del_clients = new QPushButton(tab_3);
        del_clients->setObjectName(QString::fromUtf8("del_clients"));

        gridLayout_4->addWidget(del_clients, 2, 2, 1, 1);

        CLIENTS = new QTableView(tab_3);
        CLIENTS->setObjectName(QString::fromUtf8("CLIENTS"));

        gridLayout_4->addWidget(CLIENTS, 1, 0, 1, 3);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_9 = new QGridLayout(tab_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        add_Instructor = new QPushButton(tab_8);
        add_Instructor->setObjectName(QString::fromUtf8("add_Instructor"));

        gridLayout_9->addWidget(add_Instructor, 2, 0, 1, 1);

        up_Instructor = new QPushButton(tab_8);
        up_Instructor->setObjectName(QString::fromUtf8("up_Instructor"));

        gridLayout_9->addWidget(up_Instructor, 2, 1, 1, 1);

        del_Instructor = new QPushButton(tab_8);
        del_Instructor->setObjectName(QString::fromUtf8("del_Instructor"));

        gridLayout_9->addWidget(del_Instructor, 2, 2, 1, 1);

        INSTRUCTOR = new QTableView(tab_8);
        INSTRUCTOR->setObjectName(QString::fromUtf8("INSTRUCTOR"));

        gridLayout_9->addWidget(INSTRUCTOR, 1, 0, 1, 3);

        tabWidget->addTab(tab_8, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Papyrus"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1186, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        del_applications->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        up_applications->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        add_applications->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\217\320\262\320\272\320\270 \320\262 \320\273\320\260\320\267\320\265\321\200\321\202\320\260\320\263-\320\272\320\273\321\203\320\261", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\227\320\260\321\217\320\262\320\272\320\270", nullptr));
        del_cash_register->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        add_cash_register->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        up_cash_register->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\262\320\270\320\266\320\265\320\275\320\270\320\265 \320\264\320\265\320\275\320\265\320\263 \320\277\320\276 \320\272\320\260\321\201\321\201\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\232\320\260\321\201\321\201\320\260", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\273\320\260\320\267\320\265\321\200\321\202\320\260\320\263 \320\270\320\263\321\200", nullptr));
        add_game_schedule->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        up_game_schedule->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        del_game_schedule->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\270\320\263\321\200", nullptr));
        del_service->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        up_service->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        add_service->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\274\320\276\320\275\321\202 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\270\321\201", nullptr));
        up_goods->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200\321\213 \320\273\320\260\320\267\320\265\321\200\321\202\320\260\320\263-\320\272\320\273\321\203\320\261\320\260", nullptr));
        del_goods->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        add_goods->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
        add_equipment->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        del_equipment->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        up_equipment->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\230\320\274\320\265\321\216\321\211\320\265\320\265\321\201\321\217 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265 ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        up_clients->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        add_clients->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        del_clients->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\270\320\275\321\201\321\202\321\200\321\203\320\272\321\202\320\276\321\200\320\276\320\262", nullptr));
        add_Instructor->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        up_Instructor->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        del_Instructor->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\202\320\276\321\200", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "CRM \320\273\320\260\320\267\320\265\321\200\321\202\320\260\320\263-\320\272\320\273\321\203\320\261\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
