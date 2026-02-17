/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableSchedule;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *inputTaskName;
    QSpinBox *spinHours;
    QSpinBox *spinStars;
    QSpinBox *spinDeadline;
    QPushButton *addtask;
    QPushButton *calculate;
    QListWidget *listTask;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableSchedule = new QTableWidget(centralwidget);
        if (tableSchedule->columnCount() < 7)
            tableSchedule->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableSchedule->rowCount() < 24)
            tableSchedule->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(11, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(12, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(13, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(14, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(15, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(16, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(17, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(18, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(19, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(20, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(21, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(22, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(23, __qtablewidgetitem30);
        tableSchedule->setObjectName(QString::fromUtf8("tableSchedule"));
        tableSchedule->setGeometry(QRect(10, 0, 791, 151));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 166, 170));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inputTaskName = new QLineEdit(groupBox);
        inputTaskName->setObjectName(QString::fromUtf8("inputTaskName"));

        verticalLayout->addWidget(inputTaskName);

        spinHours = new QSpinBox(groupBox);
        spinHours->setObjectName(QString::fromUtf8("spinHours"));

        verticalLayout->addWidget(spinHours);

        spinStars = new QSpinBox(groupBox);
        spinStars->setObjectName(QString::fromUtf8("spinStars"));

        verticalLayout->addWidget(spinStars);

        spinDeadline = new QSpinBox(groupBox);
        spinDeadline->setObjectName(QString::fromUtf8("spinDeadline"));

        verticalLayout->addWidget(spinDeadline);

        addtask = new QPushButton(centralwidget);
        addtask->setObjectName(QString::fromUtf8("addtask"));
        addtask->setGeometry(QRect(20, 350, 91, 26));
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(20, 390, 88, 26));
        listTask = new QListWidget(centralwidget);
        listTask->setObjectName(QString::fromUtf8("listTask"));
        listTask->setGeometry(QRect(250, 190, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSchedule->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSchedule->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableSchedule->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableSchedule->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableSchedule->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableSchedule->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableSchedule->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableSchedule->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableSchedule->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "01:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableSchedule->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "02:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableSchedule->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "03:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableSchedule->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "04:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableSchedule->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableSchedule->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "06:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableSchedule->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "07:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableSchedule->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "08:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableSchedule->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "09:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableSchedule->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "10:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableSchedule->verticalHeaderItem(11);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "11:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableSchedule->verticalHeaderItem(12);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "12:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableSchedule->verticalHeaderItem(13);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "13:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableSchedule->verticalHeaderItem(14);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "10:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableSchedule->verticalHeaderItem(15);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "15:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableSchedule->verticalHeaderItem(16);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "17:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableSchedule->verticalHeaderItem(17);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "18:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableSchedule->verticalHeaderItem(18);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "19:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableSchedule->verticalHeaderItem(19);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "20:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableSchedule->verticalHeaderItem(20);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "21:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableSchedule->verticalHeaderItem(21);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "22:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableSchedule->verticalHeaderItem(22);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "23:00", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Adtask", nullptr));
        addtask->setText(QCoreApplication::translate("MainWindow", "addtask", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
