/********************************************************************************
** Form generated from reading UI file 'view_smart_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_SMART_CALC_H
#define UI_VIEW_SMART_CALC_H

#include <qcustomplot.h>

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QPushButton *pushButton_del;
  QPushButton *pushButton_mul;
  QPushButton *pushButton_minus;
  QPushButton *pushButton_eq;
  QPushButton *pushButton_4;
  QPushButton *pushButton_0;
  QPushButton *pushButton_mod;
  QPushButton *pushButton_7;
  QPushButton *pushButton_5;
  QPushButton *pushButton_AC;
  QPushButton *pushButton_8;
  QPushButton *pushButton_6;
  QPushButton *pushButton_9;
  QPushButton *pushButton_backspace;
  QPushButton *pushButton_dot;
  QPushButton *pushButton_2;
  QPushButton *pushButton_plus;
  QPushButton *pushButton_1;
  QPushButton *pushButton_3;
  QPushButton *pushButton_tan;
  QPushButton *pushButton_lbracket;
  QPushButton *pushButton_sin;
  QPushButton *pushButton_log;
  QPushButton *pushButton_cos;
  QPushButton *pushButton_atan;
  QPushButton *pushButton_rbracket;
  QPushButton *pushButton_asin;
  QPushButton *pushButton_ln;
  QPushButton *pushButton_acos;
  QPushButton *pushButton_pow;
  QPushButton *pushButton_x;
  QPushButton *pushButton_unar;
  QCustomPlot *widget;
  QPushButton *pushButton_graph;
  QLineEdit *value_x;
  QLabel *label;
  QLineEdit *x1;
  QLineEdit *y1;
  QLineEdit *x2;
  QLineEdit *y2;
  QLabel *label_2;
  QLabel *label_3;
  QLabel *label_4;
  QLabel *label_5;
  QLabel *label_6;
  QLabel *label_7;
  QPushButton *pushButton_sqrt;
  QPushButton *pushButton_credit;
  QPushButton *pushButton_deposit;
  QLineEdit *result;
  QMenuBar *menubar;
  QStatusBar *statusbar;
  QToolBar *toolBar;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(833, 532);
    MainWindow->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "background-color: rgb(42, 39, 41);"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    pushButton_del = new QPushButton(centralwidget);
    pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
    pushButton_del->setGeometry(QRect(0, 70, 81, 71));
    pushButton_del->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(253, 159, 9);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_mul = new QPushButton(centralwidget);
    pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
    pushButton_mul->setGeometry(QRect(0, 140, 81, 71));
    pushButton_mul->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(253, 159, 9);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_minus = new QPushButton(centralwidget);
    pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
    pushButton_minus->setGeometry(QRect(0, 210, 81, 71));
    pushButton_minus->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(253, 159, 9)\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_eq = new QPushButton(centralwidget);
    pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
    pushButton_eq->setGeometry(QRect(0, 350, 81, 71));
    pushButton_eq->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(253, 159, 9);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_4 = new QPushButton(centralwidget);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(80, 210, 81, 71));
    pushButton_4->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_0 = new QPushButton(centralwidget);
    pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
    pushButton_0->setGeometry(QRect(80, 350, 161, 71));
    pushButton_0->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_mod = new QPushButton(centralwidget);
    pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
    pushButton_mod->setGeometry(QRect(400, 70, 81, 71));
    pushButton_mod->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_7 = new QPushButton(centralwidget);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(80, 140, 81, 71));
    pushButton_7->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          "\n"
                          ""));
    pushButton_5 = new QPushButton(centralwidget);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(160, 210, 81, 71));
    pushButton_5->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_AC = new QPushButton(centralwidget);
    pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
    pushButton_AC->setGeometry(QRect(480, 70, 81, 71));
    pushButton_AC->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_8 = new QPushButton(centralwidget);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setGeometry(QRect(160, 140, 81, 71));
    pushButton_8->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_6 = new QPushButton(centralwidget);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(240, 210, 81, 71));
    pushButton_6->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_9 = new QPushButton(centralwidget);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
    pushButton_9->setGeometry(QRect(240, 140, 81, 71));
    pushButton_9->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_backspace = new QPushButton(centralwidget);
    pushButton_backspace->setObjectName(
        QString::fromUtf8("pushButton_backspace"));
    pushButton_backspace->setGeometry(QRect(480, 0, 81, 71));
    pushButton_backspace->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_dot = new QPushButton(centralwidget);
    pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
    pushButton_dot->setGeometry(QRect(240, 350, 81, 71));
    pushButton_dot->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_2 = new QPushButton(centralwidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(160, 280, 81, 71));
    pushButton_2->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_plus = new QPushButton(centralwidget);
    pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
    pushButton_plus->setGeometry(QRect(0, 280, 81, 71));
    pushButton_plus->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(253, 159, 9);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_1 = new QPushButton(centralwidget);
    pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
    pushButton_1->setGeometry(QRect(80, 280, 81, 71));
    pushButton_1->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_3 = new QPushButton(centralwidget);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(240, 280, 81, 71));
    pushButton_3->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_tan = new QPushButton(centralwidget);
    pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
    pushButton_tan->setGeometry(QRect(320, 350, 81, 71));
    pushButton_tan->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_lbracket = new QPushButton(centralwidget);
    pushButton_lbracket->setObjectName(
        QString::fromUtf8("pushButton_lbracket"));
    pushButton_lbracket->setGeometry(QRect(160, 70, 81, 71));
    pushButton_lbracket->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_sin = new QPushButton(centralwidget);
    pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
    pushButton_sin->setGeometry(QRect(320, 210, 81, 71));
    pushButton_sin->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_log = new QPushButton(centralwidget);
    pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
    pushButton_log->setGeometry(QRect(320, 140, 81, 71));
    pushButton_log->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_cos = new QPushButton(centralwidget);
    pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
    pushButton_cos->setGeometry(QRect(320, 280, 81, 71));
    pushButton_cos->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_atan = new QPushButton(centralwidget);
    pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
    pushButton_atan->setGeometry(QRect(400, 350, 81, 71));
    pushButton_atan->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_rbracket = new QPushButton(centralwidget);
    pushButton_rbracket->setObjectName(
        QString::fromUtf8("pushButton_rbracket"));
    pushButton_rbracket->setGeometry(QRect(240, 70, 81, 71));
    pushButton_rbracket->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_asin = new QPushButton(centralwidget);
    pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
    pushButton_asin->setGeometry(QRect(400, 210, 81, 71));
    pushButton_asin->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_ln = new QPushButton(centralwidget);
    pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
    pushButton_ln->setGeometry(QRect(400, 140, 81, 71));
    pushButton_ln->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_acos = new QPushButton(centralwidget);
    pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
    pushButton_acos->setGeometry(QRect(400, 280, 81, 71));
    pushButton_acos->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_pow = new QPushButton(centralwidget);
    pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
    pushButton_pow->setGeometry(QRect(320, 70, 81, 71));
    pushButton_pow->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_x = new QPushButton(centralwidget);
    pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
    pushButton_x->setGeometry(QRect(480, 210, 81, 71));
    pushButton_x->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_unar = new QPushButton(centralwidget);
    pushButton_unar->setObjectName(QString::fromUtf8("pushButton_unar"));
    pushButton_unar->setGeometry(QRect(80, 70, 81, 71));
    pushButton_unar->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    widget = new QCustomPlot(centralwidget);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(560, 0, 271, 261));
    widget->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    pushButton_graph = new QPushButton(centralwidget);
    pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
    pushButton_graph->setGeometry(QRect(480, 350, 171, 71));
    pushButton_graph->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    value_x = new QLineEdit(centralwidget);
    value_x->setObjectName(QString::fromUtf8("value_x"));
    value_x->setGeometry(QRect(480, 280, 171, 71));
    value_x->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(480, 280, 58, 16));
    label->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    x1 = new QLineEdit(centralwidget);
    x1->setObjectName(QString::fromUtf8("x1"));
    x1->setGeometry(QRect(650, 280, 91, 71));
    x1->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    y1 = new QLineEdit(centralwidget);
    y1->setObjectName(QString::fromUtf8("y1"));
    y1->setGeometry(QRect(740, 280, 91, 71));
    y1->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    x2 = new QLineEdit(centralwidget);
    x2->setObjectName(QString::fromUtf8("x2"));
    x2->setGeometry(QRect(650, 350, 91, 71));
    x2->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    y2 = new QLineEdit(centralwidget);
    y2->setObjectName(QString::fromUtf8("y2"));
    y2->setGeometry(QRect(740, 350, 91, 71));
    y2->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(650, 280, 21, 16));
    label_2->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_3 = new QLabel(centralwidget);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(650, 350, 21, 16));
    label_3->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_4 = new QLabel(centralwidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(740, 280, 21, 16));
    label_4->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_5 = new QLabel(centralwidget);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(740, 350, 21, 16));
    label_5->setStyleSheet(
        QString::fromUtf8("border: 1px solid black;\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_6 = new QLabel(centralwidget);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(650, 260, 181, 21));
    label_6->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_7 = new QLabel(centralwidget);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(560, 260, 91, 21));
    label_7->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "font: 13pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    pushButton_sqrt = new QPushButton(centralwidget);
    pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
    pushButton_sqrt->setGeometry(QRect(480, 140, 81, 71));
    pushButton_sqrt->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}"));
    pushButton_credit = new QPushButton(centralwidget);
    pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
    pushButton_credit->setGeometry(QRect(0, 420, 401, 71));
    pushButton_credit->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_deposit = new QPushButton(centralwidget);
    pushButton_deposit->setObjectName(QString::fromUtf8("pushButton_deposit"));
    pushButton_deposit->setGeometry(QRect(400, 420, 431, 71));
    pushButton_deposit->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 35pt;\n"
                          "   background-color: rgb(68, 65, 66);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(95, 92, 93);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    result = new QLineEdit(centralwidget);
    result->setObjectName(QString::fromUtf8("result"));
    result->setGeometry(QRect(0, 0, 481, 71));
    result->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    result->setMaxLength(255);
    result->setReadOnly(true);
    MainWindow->setCentralWidget(centralwidget);
    label_6->raise();
    y2->raise();
    x2->raise();
    y1->raise();
    x1->raise();
    label_7->raise();
    widget->raise();
    pushButton_x->raise();
    pushButton_graph->raise();
    pushButton_del->raise();
    pushButton_mul->raise();
    pushButton_minus->raise();
    pushButton_eq->raise();
    pushButton_4->raise();
    pushButton_0->raise();
    pushButton_7->raise();
    pushButton_5->raise();
    pushButton_AC->raise();
    pushButton_8->raise();
    pushButton_6->raise();
    pushButton_9->raise();
    pushButton_backspace->raise();
    pushButton_dot->raise();
    pushButton_2->raise();
    pushButton_plus->raise();
    pushButton_1->raise();
    pushButton_3->raise();
    pushButton_tan->raise();
    pushButton_lbracket->raise();
    pushButton_sin->raise();
    pushButton_log->raise();
    pushButton_cos->raise();
    pushButton_atan->raise();
    pushButton_rbracket->raise();
    pushButton_asin->raise();
    pushButton_ln->raise();
    pushButton_acos->raise();
    pushButton_pow->raise();
    pushButton_unar->raise();
    value_x->raise();
    label_2->raise();
    label_3->raise();
    label_4->raise();
    label_5->raise();
    pushButton_sqrt->raise();
    pushButton_credit->raise();
    pushButton_mod->raise();
    pushButton_deposit->raise();
    label->raise();
    result->raise();
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 833, 21));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    pushButton_del->setText(
        QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_del->setShortcut(
        QCoreApplication::translate("MainWindow", "/", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_mul->setText(
        QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_mul->setShortcut(
        QCoreApplication::translate("MainWindow", "*", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_minus->setText(
        QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_minus->setShortcut(
        QCoreApplication::translate("MainWindow", "-", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_eq->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_eq->setShortcut(
        QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_4->setText(
        QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_4->setShortcut(
        QCoreApplication::translate("MainWindow", "4", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_0->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_0->setShortcut(
        QCoreApplication::translate("MainWindow", "0", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_mod->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
    pushButton_7->setText(
        QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_7->setShortcut(
        QCoreApplication::translate("MainWindow", "7", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_5->setText(
        QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_5->setShortcut(
        QCoreApplication::translate("MainWindow", "5", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_AC->setText(
        QCoreApplication::translate("MainWindow", "AC", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_AC->setShortcut(
        QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_8->setText(
        QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_8->setShortcut(
        QCoreApplication::translate("MainWindow", "8", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_6->setText(
        QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_6->setShortcut(
        QCoreApplication::translate("MainWindow", "6", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_9->setText(
        QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_9->setShortcut(
        QCoreApplication::translate("MainWindow", "9", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_backspace->setText(
        QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_backspace->setShortcut(
        QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_dot->setText(
        QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_dot->setShortcut(
        QCoreApplication::translate("MainWindow", ".", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_2->setText(
        QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_2->setShortcut(
        QCoreApplication::translate("MainWindow", "2", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_plus->setText(
        QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_plus->setShortcut(
        QCoreApplication::translate("MainWindow", "+", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_1->setText(
        QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_1->setShortcut(
        QCoreApplication::translate("MainWindow", "1", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_3->setText(
        QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_3->setShortcut(
        QCoreApplication::translate("MainWindow", "3", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_tan->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    pushButton_lbracket->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_lbracket->setShortcut(
        QCoreApplication::translate("MainWindow", "(", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_sin->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    pushButton_log->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    pushButton_cos->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    pushButton_atan->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    pushButton_rbracket->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_rbracket->setShortcut(
        QCoreApplication::translate("MainWindow", ")", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_asin->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    pushButton_ln->setText(
        QCoreApplication::translate("MainWindow", "ln", nullptr));
    pushButton_acos->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    pushButton_pow->setText(
        QCoreApplication::translate("MainWindow", "^", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_pow->setShortcut(
        QCoreApplication::translate("MainWindow", "^", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_x->setText(
        QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_x->setShortcut(
        QCoreApplication::translate("MainWindow", "X", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_unar->setText(
        QCoreApplication::translate("MainWindow", "+/-", nullptr));
    pushButton_graph->setText(
        QCoreApplication::translate("MainWindow", "GRAPH", nullptr));
    value_x->setText(QString());
    label->setText(
        QCoreApplication::translate("MainWindow", "Value X:", nullptr));
    x1->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    y1->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    x2->setText(QCoreApplication::translate("MainWindow", "-5", nullptr));
    y2->setText(QCoreApplication::translate("MainWindow", "-5", nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
    label_3->setText(QCoreApplication::translate("MainWindow", "-X:", nullptr));
    label_4->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
    label_5->setText(QCoreApplication::translate("MainWindow", "-Y:", nullptr));
    label_6->setText(QCoreApplication::translate(
        "MainWindow", "               Graph size:", nullptr));
    label_7->setText(QString());
    pushButton_sqrt->setText(
        QCoreApplication::translate("MainWindow", "sqrt", nullptr));
    pushButton_credit->setText(QCoreApplication::translate(
        "MainWindow", "Credit Calculator", nullptr));
    pushButton_deposit->setText(QCoreApplication::translate(
        "MainWindow", "Deposit Calculator", nullptr));
    result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    toolBar->setWindowTitle(
        QCoreApplication::translate("MainWindow", "toolBar", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_VIEW_SMART_CALC_H
