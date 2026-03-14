/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QLabel *label_9;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *groupBox_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QTableWidget *tableWidget;
    QFrame *frame;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_14;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1114, 793);
        QPalette palette;
        QBrush brush(QColor(15, 23, 42, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #0f172a; /* Deep modern navy */\n"
"}\n"
"QGroupBox {\n"
"    background-color: rgba(255, 255, 255, 15);\n"
"    border: 1px solid rgba(255, 255, 255, 30);\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e66a2e; /* Turns a darker orange on hover */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #cc5a24; /* Turns even darker when clicked */\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 1081, 791));
        QFont font;
        font.setFamilies({QString::fromUtf8("Italic Outline Art")});
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("/* 1. Main Background */\n"
"QMainWindow, QWidget#centralwidget {\n"
"    background-color: white;\n"
"}\n"
"\n"
"/* 2. The Left Sidebar - Match the Navy exactly */\n"
"QFrame#frame { \n"
"    background-color: #1a3a8a;\n"
"}\n"
"\n"
"/* 3. The Sidebar Buttons */\n"
"QFrame#frame QPushButton {\n"
"    background-color: #1a3a8a;\n"
"    color: white;\n"
"    border: 1px solid white;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* 4. The Action Buttons (Nouveau, Enregistrer) */\n"
"QPushButton#pushButton_10, QPushButton#pushButton_2 { \n"
"    background-color: #ff7e39;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* 5. Group Boxes (The Search and Stats boxes) */\n"
"QGroupBox {\n"
"    border: 1px solid #1a3a8a;\n"
"    color: #1a3a8a;\n"
"    background-color: #f9f9f9;\n"
"}\n"
"\n"
"/* 6. The Table Headers */\n"
"QHeaderView::section {\n"
"    background-color: #1a3a8a;\n"
"    color: white;\n"
"}"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(630, 140, 421, 261));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        groupBox_2->setFont(font1);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 50, 121, 20));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 100, 81, 20));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 140, 63, 20));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(160, 50, 113, 28));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}"));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(130, 100, 91, 28));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        comboBox_2->setFont(font3);
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"/* This part makes the list inside look clean too */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff;\n"
"    selection-background-color: #ff7e39;\n"
"    color: #000000;\n"
"}"));
        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(110, 170, 131, 29));
        dateEdit->setFont(font3);
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"}"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 170, 63, 20));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 170, 63, 20));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        dateEdit_2 = new QDateEdit(groupBox_2);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(290, 170, 121, 29));
        dateEdit_2->setFont(font3);
        dateEdit_2->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"}"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 220, 131, 29));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 126, 57, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(127, 170, 255, 15));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(63, 127, 255, 15));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(0, 42, 127, 15));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(0, 57, 170, 15));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush8(QColor(127, 170, 255, 135));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        QBrush brush11(QColor(0, 85, 255, 15));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush12(QColor(76, 136, 255, 15));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton->setPalette(palette1);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: #ff7e39;\n"
"color: white;\n"
"border-radius: 4px;\n"
"font-weight: bold;"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(660, 420, 351, 141));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(true);
        groupBox_3->setFont(font6);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 40, 261, 20));
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        font7.setItalic(false);
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 70, 261, 20));
        label_11->setFont(font7);
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 100, 271, 20));
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(160, 140, 461, 411));
        groupBox_5->setFont(font6);
        label = new QLabel(groupBox_5);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 63, 20));
        QFont font8;
        font8.setPointSize(13);
        font8.setBold(true);
        font8.setItalic(true);
        label->setFont(font8);
        label->setStyleSheet(QString::fromUtf8("color: #1a3a8a;\n"
"font-weight: bold;\n"
""));
        lineEdit = new QLineEdit(groupBox_5);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 50, 221, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 63, 20));
        label_2->setFont(font8);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox_5);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 110, 221, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 180, 91, 20));
        label_3->setFont(font8);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        comboBox = new QComboBox(groupBox_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 190, 121, 28));
        comboBox->setFont(font7);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"/* This part makes the list inside look clean too */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff;\n"
"    selection-background-color: #ff7e39;\n"
"    color: #000000;\n"
"}"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 250, 91, 20));
        label_4->setFont(font8);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(120, 250, 261, 101));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 370, 181, 29));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush13(QColor(127, 170, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(63, 127, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(0, 42, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(0, 57, 170, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        QBrush brush17(QColor(0, 85, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush18(QColor(76, 136, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        pushButton_2->setPalette(palette2);
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        font9.setItalic(false);
        pushButton_2->setFont(font9);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: white;"));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(160, 60, 871, 61));
        pushButton_3 = new QPushButton(groupBox_6);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 8, 201, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_3->setPalette(palette3);
        pushButton_3->setFont(font9);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff7e39;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #d35400;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e67e22;\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(340, 10, 171, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush19(QColor(255, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(212, 0, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush20);
        QBrush brush21(QColor(85, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush21);
        QBrush brush22(QColor(113, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush22);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush23(QColor(212, 127, 127, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush21);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush22);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        QBrush brush24(QColor(170, 0, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush25(QColor(221, 0, 0, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush25);
        pushButton_5->setPalette(palette4);
        pushButton_5->setFont(font9);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff7e39;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #d35400;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e67e22;\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_6);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(580, 8, 161, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_4->setPalette(palette5);
        pushButton_4->setFont(font9);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff7e39;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #d35400;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e67e22;\n"
"}"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(150, 570, 171, 31));
        QFont font10;
        font10.setPointSize(16);
        font10.setBold(true);
        font10.setItalic(true);
        font10.setUnderline(true);
        label_13->setFont(font10);
        label_13->setStyleSheet(QString::fromUtf8("color:#1a3a8a;"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(230, 620, 651, 131));
        tableWidget->setMaximumSize(QSize(671, 16777215));
        QFont font11;
        font11.setPointSize(8);
        font11.setBold(true);
        font11.setItalic(true);
        tableWidget->setFont(font11);
        tableWidget->setStyleSheet(QString::fromUtf8("/* Forces the background of the entire table area to white */\n"
"QTableView {\n"
"    background-color: white;\n"
"    alternate-background-color: white;\n"
"    gridline-color: #d1d5db;\n"
"    color: black;\n"
"}\n"
"\n"
"/* Forces the empty space below the rows to also be white */\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: white;\n"
"}\n"
"\n"
"/* Keeps your navy blue headers */\n"
"QHeaderView::section {\n"
"    background-color: #1a3a8a;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: 1px solid white;\n"
"}"));
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 140, 141, 411));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: white;\n"
"    border-right: 1px solid #1a3a8a;\n"
"}\n"
"QPushButton {\n"
"    background-color: #1a3a8a;\n"
"    color: white;\n"
"    border: 1px solid white;\n"
"    border-radius: 4px;\n"
"    font-weight: bold;\n"
"}\n"
"QFrame {\n"
"    background-color: white;\n"
"    border: 1px solid #1a3a8a;\n"
"}\n"
"\n"
"/* This keeps the header blue but makes the rest white */\n"
"#label_modules { \n"
"    background-color: #1a3a8a;\n"
"    color: white;\n"
"}\n"
"QFrame {\n"
"    background-color: white;\n"
"    border-right: 1px solid #1a3a8a;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(-1, 0, 141, 61));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush26(QColor(220, 220, 165, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush26);
        QBrush brush27(QColor(183, 183, 137, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush27);
        QBrush brush28(QColor(73, 73, 55, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush28);
        QBrush brush29(QColor(98, 98, 73, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush29);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush30(QColor(201, 201, 182, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush30);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush26);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush27);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush28);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush30);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush26);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush27);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush28);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        QBrush brush31(QColor(147, 147, 110, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush31);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush32(QColor(191, 191, 143, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush32);
        pushButton_6->setPalette(palette6);
        pushButton_6->setFont(font8);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #ff7e39;;\n"
"color: white;\n"
"font-weight: bold;\n"
"padding: 5px;"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(-10, 80, 151, 61));
        QFont font12;
        font12.setPointSize(11);
        font12.setBold(true);
        font12.setItalic(true);
        font12.setUnderline(true);
        font12.setStrikeOut(false);
        pushButton_7->setFont(font12);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #1a3a8a;\n"
"color: white;\n"
"font-weight: bold;\n"
"padding: 5px;"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(-10, 160, 151, 61));
        QFont font13;
        font13.setPointSize(11);
        font13.setBold(true);
        font13.setItalic(true);
        font13.setUnderline(true);
        pushButton_8->setFont(font13);
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(-10, 240, 151, 61));
        pushButton_9->setFont(font13);
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(-10, 320, 151, 61));
        pushButton_10->setFont(font13);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 0, 141, 141));
        label_14->setPixmap(QPixmap(QString::fromUtf8("logo.jpg")));
        label_14->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "                                                  Article Management", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "                  Article Search & Filter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Recherche:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Statut:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Tous", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Brouillon", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Archiv\303\251", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Publi\303\251", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "De:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\303\240:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "                    Article stats:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Total:                               0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Publi\303\251s:                           0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Archiv\303\251s:                         0", nullptr));
        groupBox_5->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Titre:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Statut:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Brouillon", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Archiv\303\251", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Publi\303\251", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Contenu:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        groupBox_6->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Nouveau article", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Article list:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Titre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Date cr\303\251ation", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Date modification", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Modules", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "  Module 1  ", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Module 2  ", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Module 3  ", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Module 4  ", nullptr));
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
