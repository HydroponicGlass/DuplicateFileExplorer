/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *searchLocation_btn;
    QPushButton *saveLocation_btn;
    QPlainTextEdit *searchLocation_txt;
    QPlainTextEdit *saveLocation_txt;
    QCheckBox *quickDuplicateCheck_chk;
    QPushButton *search_btn;
    QLabel *status_lbl;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QTableWidget *result_table;
    QHBoxLayout *horizontalLayout;
    QPushButton *remove_btn;
    QPushButton *move_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(624, 612);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 150));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        searchLocation_btn = new QPushButton(groupBox);
        searchLocation_btn->setObjectName(QString::fromUtf8("searchLocation_btn"));

        gridLayout->addWidget(searchLocation_btn, 1, 2, 1, 1);

        saveLocation_btn = new QPushButton(groupBox);
        saveLocation_btn->setObjectName(QString::fromUtf8("saveLocation_btn"));

        gridLayout->addWidget(saveLocation_btn, 2, 2, 1, 1);

        searchLocation_txt = new QPlainTextEdit(groupBox);
        searchLocation_txt->setObjectName(QString::fromUtf8("searchLocation_txt"));
        searchLocation_txt->setMaximumSize(QSize(16777215, 30));
        searchLocation_txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(searchLocation_txt, 1, 1, 1, 1);

        saveLocation_txt = new QPlainTextEdit(groupBox);
        saveLocation_txt->setObjectName(QString::fromUtf8("saveLocation_txt"));
        saveLocation_txt->setMaximumSize(QSize(16777215, 30));
        saveLocation_txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(saveLocation_txt, 2, 1, 1, 1);

        quickDuplicateCheck_chk = new QCheckBox(groupBox);
        quickDuplicateCheck_chk->setObjectName(QString::fromUtf8("quickDuplicateCheck_chk"));

        gridLayout->addWidget(quickDuplicateCheck_chk, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        search_btn = new QPushButton(groupBox);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));

        verticalLayout_2->addWidget(search_btn);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        status_lbl = new QLabel(centralwidget);
        status_lbl->setObjectName(QString::fromUtf8("status_lbl"));
        status_lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(status_lbl);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        result_table = new QTableWidget(groupBox_2);
        if (result_table->columnCount() < 5)
            result_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        result_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        result_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        result_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        result_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        result_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        result_table->setObjectName(QString::fromUtf8("result_table"));
        result_table->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        result_table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        result_table->setAutoScroll(true);
        result_table->setAlternatingRowColors(false);
        result_table->setShowGrid(true);
        result_table->setCornerButtonEnabled(true);
        result_table->horizontalHeader()->setCascadingSectionResizes(false);
        result_table->horizontalHeader()->setMinimumSectionSize(34);
        result_table->horizontalHeader()->setHighlightSections(true);
        result_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        result_table->horizontalHeader()->setStretchLastSection(true);
        result_table->verticalHeader()->setDefaultSectionSize(23);
        result_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        result_table->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(result_table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        remove_btn = new QPushButton(groupBox_2);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));

        horizontalLayout->addWidget(remove_btn);

        move_btn = new QPushButton(groupBox_2);
        move_btn->setObjectName(QString::fromUtf8("move_btn"));

        horizontalLayout->addWidget(move_btn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 624, 21));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Save Location", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Search Location", nullptr));
        searchLocation_btn->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        saveLocation_btn->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        quickDuplicateCheck_chk->setText(QCoreApplication::translate("MainWindow", "Quick Search", nullptr));
        search_btn->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        status_lbl->setText(QCoreApplication::translate("MainWindow", "DuplicateFileExplorer V0.2", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        QTableWidgetItem *___qtablewidgetitem = result_table->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = result_table->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Size(kb)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = result_table->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Date created", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = result_table->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        remove_btn->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        move_btn->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
