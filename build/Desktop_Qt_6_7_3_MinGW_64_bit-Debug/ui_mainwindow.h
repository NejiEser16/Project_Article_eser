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
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QLabel *label_16;
    QLabel *label_17;
    QDateEdit *dateEdit_3;
    QLabel *label_18;
    QDateEdit *dateEdit_4;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_11;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_5;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;
    QLabel *label_15;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
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
        groupBox->setGeometry(QRect(10, -50, 1081, 801));
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
        groupBox_2->setGeometry(QRect(640, 140, 421, 261));
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
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 220, 131, 29));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 106, 0, 255));
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
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 150, 63, 20));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(70, 170, 63, 20));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        label_17->setFont(font5);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        dateEdit_3 = new QDateEdit(groupBox_2);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(110, 180, 131, 29));
        dateEdit_3->setFont(font3);
        dateEdit_3->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"}"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(260, 170, 63, 20));
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        dateEdit_4 = new QDateEdit(groupBox_2);
        dateEdit_4->setObjectName("dateEdit_4");
        dateEdit_4->setGeometry(QRect(290, 180, 121, 29));
        dateEdit_4->setFont(font3);
        dateEdit_4->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"}"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(660, 420, 351, 151));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(true);
        groupBox_3->setFont(font6);
        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(110, 110, 151, 29));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        pushButton_11->setFont(font7);
        pushButton_11->setAutoFillBackground(false);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 141, 20));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setItalic(true);
        label->setFont(font8);
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 50, 151, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(160, 140, 461, 431));
        groupBox_5->setFont(font6);
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 63, 20));
        QFont font9;
        font9.setPointSize(13);
        font9.setBold(true);
        font9.setItalic(true);
        label_2->setFont(font9);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox_5);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 40, 221, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 91, 20));
        label_3->setFont(font9);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        comboBox = new QComboBox(groupBox_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(130, 100, 121, 28));
        QFont font10;
        font10.setPointSize(11);
        font10.setBold(true);
        font10.setItalic(false);
        comboBox->setFont(font10);
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
        label_4->setGeometry(QRect(10, 140, 91, 20));
        label_4->setFont(font9);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1a3a8a;\n"
"    font-weight: bold;\n"
"}"));
        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(120, 170, 261, 101));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #1a3a8a;\n"
"    border-radius: 4px;\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 390, 181, 29));
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
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setItalic(false);
        pushButton_2->setFont(font11);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 300, 201, 20));
        label_15->setFont(font9);
        comboBox_3 = new QComboBox(groupBox_5);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(220, 330, 151, 28));
        QFont font12;
        font12.setPointSize(10);
        font12.setBold(true);
        comboBox_3->setFont(font12);
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(160, 60, 871, 61));
        pushButton_3 = new QPushButton(groupBox_6);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 10, 141, 41));
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
        QFont font13;
        font13.setPointSize(10);
        font13.setBold(true);
        font13.setItalic(false);
        pushButton_3->setFont(font13);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(190, 10, 151, 41));
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
        pushButton_5->setFont(font13);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_6);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(370, 10, 151, 41));
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
        pushButton_4->setFont(font13);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        pushButton_12 = new QPushButton(groupBox_6);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(560, 10, 131, 41));
        pushButton_12->setFont(font12);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        pushButton_13 = new QPushButton(groupBox_6);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(720, 10, 121, 41));
        pushButton_13->setFont(font12);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 80, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 60, 0);\n"
"}"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(150, 570, 171, 31));
        QFont font14;
        font14.setPointSize(16);
        font14.setBold(true);
        font14.setItalic(true);
        font14.setUnderline(true);
        label_13->setFont(font14);
        label_13->setStyleSheet(QString::fromUtf8("color:#1a3a8a;"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(230, 630, 641, 131));
        tableWidget->setMaximumSize(QSize(671, 16777215));
        QFont font15;
        font15.setPointSize(8);
        font15.setBold(true);
        font15.setItalic(true);
        tableWidget->setFont(font15);
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
"}\n"
"QTableWidget::item:selected {\n"
"    background-color: rgb(255, 106, 0);\n"
"    color: white;\n"
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
        QBrush brush26(QColor(255, 126, 57, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush26);
        QBrush brush27(QColor(220, 220, 165, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush27);
        QBrush brush28(QColor(183, 183, 137, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush28);
        QBrush brush29(QColor(73, 73, 55, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush29);
        QBrush brush30(QColor(98, 98, 73, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush30);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush26);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush26);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush31(QColor(201, 201, 182, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush31);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush26);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush27);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush28);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush30);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush26);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush26);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush31);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush26);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush27);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush28);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush30);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush26);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        QBrush brush32(QColor(147, 147, 110, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush32);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush33(QColor(191, 191, 143, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush33);
        pushButton_6->setPalette(palette6);
        pushButton_6->setFont(font9);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #ff7e39;;\n"
"color: white;\n"
"font-weight: bold;\n"
"padding: 5px;"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(-10, 80, 151, 61));
        QFont font16;
        font16.setPointSize(11);
        font16.setBold(true);
        font16.setItalic(true);
        font16.setUnderline(true);
        font16.setStrikeOut(false);
        pushButton_7->setFont(font16);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(26, 58, 138);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(15, 40, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(10, 25, 70);\n"
"}"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(-10, 160, 151, 61));
        QFont font17;
        font17.setPointSize(11);
        font17.setBold(true);
        font17.setItalic(true);
        font17.setUnderline(true);
        pushButton_8->setFont(font17);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(26, 58, 138);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(15, 40, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(10, 25, 70);\n"
"}"));
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(-10, 240, 151, 61));
        pushButton_9->setFont(font17);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(26, 58, 138);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(15, 40, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(10, 25, 70);\n"
"}"));
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(-10, 320, 151, 61));
        pushButton_10->setFont(font17);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(26, 58, 138);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(15, 40, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(10, 25, 70);\n"
"}"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(-10, 0, 151, 141));
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
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Tous", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Brouillon", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Archiv\303\251", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Publi\303\251", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "De:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\303\240:", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Titre \303\240 modifier:", nullptr));
        groupBox_5->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Titre:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Statut:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Brouillon", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Archiv\303\251", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Publi\303\251", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "R\303\251sum\303\251:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Chercheurs associ\303\251:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Jean Dupont", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Ahmed Ben Salem", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Marie Curie", nullptr));

        groupBox_6->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Nouveau article", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Top Chercheur", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Article list:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Titre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Chercheur", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Date cr\303\251ation", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Date modification", nullptr));
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
