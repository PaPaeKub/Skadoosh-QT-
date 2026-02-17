/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
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
    QLabel *label_3;
    QLineEdit *inputTaskName;
    QLabel *label_4;
    QDoubleSpinBox *spinTaskHours;
    QLabel *label_5;
    QSpinBox *spinDeadlineDay;
    QLabel *label_6;
    QTimeEdit *timeDeadline;
    QPushButton *btnAddTask;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QSpinBox *spinCurDay;
    QLabel *label_9;
    QTimeEdit *timeCur;
    QPushButton *btnUpdateTime;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLineEdit *inputRoutineName;
    QLabel *label_11;
    QTimeEdit *timeStart;
    QLabel *label_12;
    QTimeEdit *timeEnd;
    QCheckBox *cbMon;
    QCheckBox *cbTue;
    QCheckBox *cbWed;
    QCheckBox *cbThu;
    QCheckBox *cbFri;
    QCheckBox *cbSat;
    QCheckBox *cbSun;
    QPushButton *btnAddRoutine;
    QTableWidget *tableToDo;
    QPushButton *btnCompleteTask;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1068, 752);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableSchedule = new QTableWidget(centralwidget);
        if (tableSchedule->columnCount() < 7)
            tableSchedule->setColumnCount(7);
        if (tableSchedule->rowCount() < 23)
            tableSchedule->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableSchedule->setVerticalHeaderItem(22, __qtablewidgetitem22);
        tableSchedule->setObjectName("tableSchedule");
        tableSchedule->setGeometry(QRect(10, 0, 931, 181));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 190, 181, 311));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        inputTaskName = new QLineEdit(groupBox);
        inputTaskName->setObjectName("inputTaskName");

        verticalLayout->addWidget(inputTaskName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        spinTaskHours = new QDoubleSpinBox(groupBox);
        spinTaskHours->setObjectName("spinTaskHours");

        verticalLayout->addWidget(spinTaskHours);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        spinDeadlineDay = new QSpinBox(groupBox);
        spinDeadlineDay->setObjectName("spinDeadlineDay");

        verticalLayout->addWidget(spinDeadlineDay);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        timeDeadline = new QTimeEdit(groupBox);
        timeDeadline->setObjectName("timeDeadline");

        verticalLayout->addWidget(timeDeadline);

        btnAddTask = new QPushButton(groupBox);
        btnAddTask->setObjectName("btnAddTask");

        verticalLayout->addWidget(btnAddTask);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(680, 190, 81, 20));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(220, 500, 181, 191));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        spinCurDay = new QSpinBox(groupBox_2);
        spinCurDay->setObjectName("spinCurDay");

        verticalLayout_2->addWidget(spinCurDay);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        timeCur = new QTimeEdit(groupBox_2);
        timeCur->setObjectName("timeCur");

        verticalLayout_2->addWidget(timeCur);

        btnUpdateTime = new QPushButton(groupBox_2);
        btnUpdateTime->setObjectName("btnUpdateTime");

        verticalLayout_2->addWidget(btnUpdateTime);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 190, 181, 501));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        inputRoutineName = new QLineEdit(groupBox_3);
        inputRoutineName->setObjectName("inputRoutineName");

        verticalLayout_3->addWidget(inputRoutineName);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        verticalLayout_3->addWidget(label_11);

        timeStart = new QTimeEdit(groupBox_3);
        timeStart->setObjectName("timeStart");

        verticalLayout_3->addWidget(timeStart);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        verticalLayout_3->addWidget(label_12);

        timeEnd = new QTimeEdit(groupBox_3);
        timeEnd->setObjectName("timeEnd");

        verticalLayout_3->addWidget(timeEnd);

        cbMon = new QCheckBox(groupBox_3);
        cbMon->setObjectName("cbMon");

        verticalLayout_3->addWidget(cbMon);

        cbTue = new QCheckBox(groupBox_3);
        cbTue->setObjectName("cbTue");

        verticalLayout_3->addWidget(cbTue);

        cbWed = new QCheckBox(groupBox_3);
        cbWed->setObjectName("cbWed");

        verticalLayout_3->addWidget(cbWed);

        cbThu = new QCheckBox(groupBox_3);
        cbThu->setObjectName("cbThu");

        verticalLayout_3->addWidget(cbThu);

        cbFri = new QCheckBox(groupBox_3);
        cbFri->setObjectName("cbFri");

        verticalLayout_3->addWidget(cbFri);

        cbSat = new QCheckBox(groupBox_3);
        cbSat->setObjectName("cbSat");

        verticalLayout_3->addWidget(cbSat);

        cbSun = new QCheckBox(groupBox_3);
        cbSun->setObjectName("cbSun");

        verticalLayout_3->addWidget(cbSun);

        btnAddRoutine = new QPushButton(groupBox_3);
        btnAddRoutine->setObjectName("btnAddRoutine");

        verticalLayout_3->addWidget(btnAddRoutine);

        tableToDo = new QTableWidget(centralwidget);
        if (tableToDo->columnCount() < 5)
            tableToDo->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableToDo->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableToDo->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableToDo->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableToDo->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableToDo->setHorizontalHeaderItem(4, __qtablewidgetitem27);
        tableToDo->setObjectName("tableToDo");
        tableToDo->setGeometry(QRect(410, 210, 621, 481));
        btnCompleteTask = new QPushButton(centralwidget);
        btnCompleteTask->setObjectName("btnCompleteTask");
        btnCompleteTask->setGeometry(QRect(660, 630, 131, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1068, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSchedule->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSchedule->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "01:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableSchedule->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "02:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableSchedule->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "03:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableSchedule->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "04:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableSchedule->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableSchedule->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "06:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableSchedule->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "07:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableSchedule->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "08:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableSchedule->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "09:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableSchedule->verticalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "10:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableSchedule->verticalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "11:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableSchedule->verticalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "12:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableSchedule->verticalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "13:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableSchedule->verticalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "10:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableSchedule->verticalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "15:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableSchedule->verticalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "17:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableSchedule->verticalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "18:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableSchedule->verticalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "19:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableSchedule->verticalHeaderItem(19);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "20:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableSchedule->verticalHeaderItem(20);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "21:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableSchedule->verticalHeaderItem(21);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "22:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableSchedule->verticalHeaderItem(22);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "23:00", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Adtask", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Task name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time spent working", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Deadline day", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Time deadline", nullptr));
        btnAddTask->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TO DO LIST", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Current Time", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        btnUpdateTime->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Add Routine/Spacial Event", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Name Event", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Time Start", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Time End", nullptr));
        cbMon->setText(QCoreApplication::translate("MainWindow", "Monday", nullptr));
        cbTue->setText(QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        cbWed->setText(QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        cbThu->setText(QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        cbFri->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
        cbSat->setText(QCoreApplication::translate("MainWindow", "Saturday", nullptr));
        cbSun->setText(QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        btnAddRoutine->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableToDo->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableToDo->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Deadline", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableToDo->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Remaining time", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableToDo->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Time required", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableToDo->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        btnCompleteTask->setText(QCoreApplication::translate("MainWindow", "Complete Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
