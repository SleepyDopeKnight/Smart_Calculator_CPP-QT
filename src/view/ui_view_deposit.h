/********************************************************************************
** Form generated from reading UI file 'view_deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_DEPOSIT_H
#define UI_VIEW_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Deposit {
 public:
  QLabel *label_8;
  QLabel *label_13;
  QLabel *label;
  QLineEdit *ui_sum_deposit;
  QLabel *ui_sum_nalog;
  QLineEdit *ui_time_deposit;
  QLabel *label_5;
  QLineEdit *ui_procent;
  QLabel *label_12;
  QLabel *label_6;
  QPushButton *pushButton_res;
  QLabel *label_2;
  QLabel *label_14;
  QLabel *label_16;
  QLabel *label_4;
  QLabel *err;
  QLabel *label_3;
  QLabel *label_7;
  QLabel *label_9;
  QLineEdit *ui_nalog;
  QLabel *label_10;
  QCheckBox *ui_capital_procent;
  QComboBox *ui_type;
  QLabel *label_11;
  QLabel *label_17;
  QLabel *ui_pay_procent;
  QLabel *ui_last_deposit;
  QLabel *label_18;
  QFrame *line_7;
  QFrame *line_8;
  QFrame *line_9;
  QFrame *line_10;
  QLabel *label_19;
  QLabel *label_20;
  QLineEdit *ui_day_deposit;
  QLineEdit *ui_sum_day_deposit;
  QLabel *label_15;
  QLabel *label_21;
  QLineEdit *ui_day_pay;
  QLineEdit *ui_sum_day_pay;
  QLabel *label_22;
  QLabel *label_23;
  QLabel *label_24;
  QFrame *line_11;
  QLabel *label_25;
  QPushButton *pushButton_add;
  QPushButton *pushButton_take;
  QPlainTextEdit *transactions;
  QLabel *label_26;

  void setupUi(QDialog *Deposit) {
    if (Deposit->objectName().isEmpty())
      Deposit->setObjectName(QString::fromUtf8("Deposit"));
    Deposit->resize(1010, 515);
    Deposit->setMinimumSize(QSize(1010, 515));
    Deposit->setMaximumSize(QSize(1010, 515));
    Deposit->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_8 = new QLabel(Deposit);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(10, 350, 171, 31));
    label_8->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_13 = new QLabel(Deposit);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(380, 160, 31, 21));
    label_13->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label = new QLabel(Deposit);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 60, 161, 31));
    label->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_sum_deposit = new QLineEdit(Deposit);
    ui_sum_deposit->setObjectName(QString::fromUtf8("ui_sum_deposit"));
    ui_sum_deposit->setGeometry(QRect(190, 50, 181, 41));
    ui_sum_deposit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_sum_nalog = new QLabel(Deposit);
    ui_sum_nalog->setObjectName(QString::fromUtf8("ui_sum_nalog"));
    ui_sum_nalog->setGeometry(QRect(190, 340, 181, 41));
    ui_sum_nalog->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_time_deposit = new QLineEdit(Deposit);
    ui_time_deposit->setObjectName(QString::fromUtf8("ui_time_deposit"));
    ui_time_deposit->setGeometry(QRect(190, 100, 181, 41));
    ui_time_deposit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_5 = new QLabel(Deposit);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(560, 150, 251, 51));
    label_5->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_procent = new QLineEdit(Deposit);
    ui_procent->setObjectName(QString::fromUtf8("ui_procent"));
    ui_procent->setGeometry(QRect(190, 150, 181, 41));
    ui_procent->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_12 = new QLabel(Deposit);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(380, 60, 41, 31));
    label_12->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_6 = new QLabel(Deposit);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(480, 60, 61, 31));
    label_6->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    pushButton_res = new QPushButton(Deposit);
    pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
    pushButton_res->setGeometry(QRect(650, 420, 341, 61));
    pushButton_res->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(253, 159, 9);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(202, 125, 6);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    label_2 = new QLabel(Deposit);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 110, 131, 31));
    label_2->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_14 = new QLabel(Deposit);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(380, 340, 41, 31));
    label_14->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_16 = new QLabel(Deposit);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setGeometry(QRect(380, 440, 41, 31));
    label_16->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_4 = new QLabel(Deposit);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(810, 10, 201, 71));
    label_4->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    err = new QLabel(Deposit);
    err->setObjectName(QString::fromUtf8("err"));
    err->setGeometry(QRect(480, 370, 131, 91));
    err->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);\n"
                          "color: red;"));
    label_3 = new QLabel(Deposit);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 160, 171, 31));
    label_3->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_7 = new QLabel(Deposit);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(380, 110, 41, 21));
    label_7->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_9 = new QLabel(Deposit);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(10, 210, 161, 31));
    label_9->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_nalog = new QLineEdit(Deposit);
    ui_nalog->setObjectName(QString::fromUtf8("ui_nalog"));
    ui_nalog->setGeometry(QRect(190, 200, 181, 41));
    ui_nalog->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_10 = new QLabel(Deposit);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(10, 250, 161, 31));
    label_10->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_capital_procent = new QCheckBox(Deposit);
    ui_capital_procent->setObjectName(QString::fromUtf8("ui_capital_procent"));
    ui_capital_procent->setGeometry(QRect(570, 300, 221, 41));
    ui_type = new QComboBox(Deposit);
    ui_type->addItem(QString());
    ui_type->addItem(QString());
    ui_type->addItem(QString());
    ui_type->addItem(QString());
    ui_type->addItem(QString());
    ui_type->setObjectName(QString::fromUtf8("ui_type"));
    ui_type->setGeometry(QRect(190, 250, 181, 41));
    ui_type->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 18pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_11 = new QLabel(Deposit);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(10, 400, 171, 31));
    label_11->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_17 = new QLabel(Deposit);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(10, 440, 171, 31));
    label_17->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_pay_procent = new QLabel(Deposit);
    ui_pay_procent->setObjectName(QString::fromUtf8("ui_pay_procent"));
    ui_pay_procent->setGeometry(QRect(190, 390, 181, 41));
    ui_pay_procent->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_last_deposit = new QLabel(Deposit);
    ui_last_deposit->setObjectName(QString::fromUtf8("ui_last_deposit"));
    ui_last_deposit->setGeometry(QRect(190, 440, 181, 41));
    ui_last_deposit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_18 = new QLabel(Deposit);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setGeometry(QRect(40, 470, 141, 31));
    label_18->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    line_7 = new QFrame(Deposit);
    line_7->setObjectName(QString::fromUtf8("line_7"));
    line_7->setGeometry(QRect(20, 320, 118, 3));
    line_7->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_7->setFrameShape(QFrame::HLine);
    line_7->setFrameShadow(QFrame::Sunken);
    line_8 = new QFrame(Deposit);
    line_8->setObjectName(QString::fromUtf8("line_8"));
    line_8->setGeometry(QRect(130, 320, 118, 3));
    line_8->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_8->setFrameShape(QFrame::HLine);
    line_8->setFrameShadow(QFrame::Sunken);
    line_9 = new QFrame(Deposit);
    line_9->setObjectName(QString::fromUtf8("line_9"));
    line_9->setGeometry(QRect(230, 320, 118, 3));
    line_9->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_9->setFrameShape(QFrame::HLine);
    line_9->setFrameShadow(QFrame::Sunken);
    line_10 = new QFrame(Deposit);
    line_10->setObjectName(QString::fromUtf8("line_10"));
    line_10->setGeometry(QRect(340, 320, 118, 3));
    line_10->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_10->setFrameShape(QFrame::HLine);
    line_10->setFrameShadow(QFrame::Sunken);
    label_19 = new QLabel(Deposit);
    label_19->setObjectName(QString::fromUtf8("label_19"));
    label_19->setGeometry(QRect(380, 210, 31, 21));
    label_19->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_20 = new QLabel(Deposit);
    label_20->setObjectName(QString::fromUtf8("label_20"));
    label_20->setGeometry(QRect(380, 390, 31, 21));
    label_20->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_day_deposit = new QLineEdit(Deposit);
    ui_day_deposit->setObjectName(QString::fromUtf8("ui_day_deposit"));
    ui_day_deposit->setGeometry(QRect(560, 50, 181, 41));
    ui_day_deposit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_sum_day_deposit = new QLineEdit(Deposit);
    ui_sum_day_deposit->setObjectName(QString::fromUtf8("ui_sum_day_deposit"));
    ui_sum_day_deposit->setGeometry(QRect(560, 100, 181, 41));
    ui_sum_day_deposit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_15 = new QLabel(Deposit);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(480, 110, 71, 31));
    label_15->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_21 = new QLabel(Deposit);
    label_21->setObjectName(QString::fromUtf8("label_21"));
    label_21->setGeometry(QRect(480, 210, 61, 31));
    label_21->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    ui_day_pay = new QLineEdit(Deposit);
    ui_day_pay->setObjectName(QString::fromUtf8("ui_day_pay"));
    ui_day_pay->setGeometry(QRect(560, 200, 181, 41));
    ui_day_pay->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_sum_day_pay = new QLineEdit(Deposit);
    ui_sum_day_pay->setObjectName(QString::fromUtf8("ui_sum_day_pay"));
    ui_sum_day_pay->setGeometry(QRect(560, 250, 181, 41));
    ui_sum_day_pay->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_22 = new QLabel(Deposit);
    label_22->setObjectName(QString::fromUtf8("label_22"));
    label_22->setGeometry(QRect(480, 260, 71, 31));
    label_22->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_23 = new QLabel(Deposit);
    label_23->setObjectName(QString::fromUtf8("label_23"));
    label_23->setGeometry(QRect(750, 110, 41, 31));
    label_23->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_24 = new QLabel(Deposit);
    label_24->setObjectName(QString::fromUtf8("label_24"));
    label_24->setGeometry(QRect(750, 260, 41, 31));
    label_24->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    line_11 = new QFrame(Deposit);
    line_11->setObjectName(QString::fromUtf8("line_11"));
    line_11->setGeometry(QRect(450, 320, 118, 3));
    line_11->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_11->setFrameShape(QFrame::HLine);
    line_11->setFrameShadow(QFrame::Sunken);
    label_25 = new QLabel(Deposit);
    label_25->setObjectName(QString::fromUtf8("label_25"));
    label_25->setGeometry(QRect(10, 270, 161, 31));
    label_25->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    pushButton_add = new QPushButton(Deposit);
    pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
    pushButton_add->setGeometry(QRect(650, 360, 171, 61));
    pushButton_add->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    pushButton_take = new QPushButton(Deposit);
    pushButton_take->setObjectName(QString::fromUtf8("pushButton_take"));
    pushButton_take->setGeometry(QRect(820, 360, 171, 61));
    pushButton_take->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "   border: 1px solid black;\n"
                          "   border-radius: 0px;\n"
                          "   font: 25pt;\n"
                          "   background-color: rgb(95, 92, 93);\n"
                          "}\n"
                          "QPushButton:pressed {\n"
                          "    background-color: rgb(161, 160, 159);\n"
                          "    border: 2px solid black;\n"
                          "}\n"
                          ""));
    transactions = new QPlainTextEdit(Deposit);
    transactions->setObjectName(QString::fromUtf8("transactions"));
    transactions->setGeometry(QRect(810, 80, 181, 241));
    transactions->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 15pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    transactions->setReadOnly(true);
    label_26 = new QLabel(Deposit);
    label_26->setObjectName(QString::fromUtf8("label_26"));
    label_26->setGeometry(QRect(560, 0, 251, 51));
    label_26->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_25->raise();
    label_8->raise();
    label_13->raise();
    label->raise();
    ui_sum_deposit->raise();
    ui_sum_nalog->raise();
    ui_time_deposit->raise();
    label_5->raise();
    ui_procent->raise();
    label_12->raise();
    label_6->raise();
    pushButton_res->raise();
    label_2->raise();
    label_14->raise();
    label_16->raise();
    label_4->raise();
    label_3->raise();
    label_7->raise();
    label_9->raise();
    ui_nalog->raise();
    label_10->raise();
    ui_capital_procent->raise();
    ui_type->raise();
    label_11->raise();
    label_17->raise();
    ui_pay_procent->raise();
    ui_last_deposit->raise();
    label_18->raise();
    line_7->raise();
    line_8->raise();
    line_9->raise();
    line_10->raise();
    label_19->raise();
    label_20->raise();
    ui_day_deposit->raise();
    ui_sum_day_deposit->raise();
    label_15->raise();
    label_21->raise();
    ui_day_pay->raise();
    ui_sum_day_pay->raise();
    label_22->raise();
    label_23->raise();
    label_24->raise();
    line_11->raise();
    pushButton_add->raise();
    pushButton_take->raise();
    err->raise();
    transactions->raise();
    label_26->raise();

    retranslateUi(Deposit);

    QMetaObject::connectSlotsByName(Deposit);
  }  // setupUi

  void retranslateUi(QDialog *Deposit) {
    Deposit->setWindowTitle(
        QCoreApplication::translate("Deposit", "Dialog", nullptr));
    label_8->setText(QCoreApplication::translate(
        "Deposit",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\275\320\260\320\273\320\276\320\263\320\260:",
        nullptr));
    label_13->setText(QCoreApplication::translate("Deposit", "%", nullptr));
    label->setText(QCoreApplication::translate(
        "Deposit",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\264\320\265\320\277\320\276\320\267\320\270\321\202\320\260:",
        nullptr));
    ui_sum_deposit->setText(QString());
    ui_sum_nalog->setText(QCoreApplication::translate("Deposit", "0", nullptr));
    ui_time_deposit->setText(QString());
    label_5->setText(QCoreApplication::translate(
        "Deposit",
        "\320\230\320\267\321\212\321\217\321\202\321\214:", nullptr));
    ui_procent->setText(QString());
    label_12->setText(
        QCoreApplication::translate("Deposit", "\321\203.\320\265.", nullptr));
    label_6->setText(QCoreApplication::translate(
        "Deposit", "\320\224\320\265\320\275\321\214:", nullptr));
    pushButton_res->setText(
        QCoreApplication::translate("Deposit",
                                    "\320\240\320\260\321\201\321\201\321\207"
                                    "\320\270\321\202\320\260\321\202\321\214",
                                    nullptr));
#if QT_CONFIG(shortcut)
    pushButton_res->setShortcut(
        QCoreApplication::translate("Deposit", "Return", nullptr));
#endif  // QT_CONFIG(shortcut)
    label_2->setText(QCoreApplication::translate(
        "Deposit",
        "\320\241\321\200\320\276\320\272 "
        "\320\262\320\272\320\273\320\260\320\264\320\260:",
        nullptr));
    label_14->setText(
        QCoreApplication::translate("Deposit", "\321\203.\320\265.", nullptr));
    label_16->setText(
        QCoreApplication::translate("Deposit", "\321\203.\320\265.", nullptr));
    label_4->setText(QCoreApplication::translate(
        "Deposit",
        "\320\241\320\277\320\270\321\201\320\276\320\272 "
        "\320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320"
        "\270\320\271/\n"
        "\320\270\320\267\321\212\321\217\321\202\320\270\320\271:",
        nullptr));
    err->setText(QString());
    label_3->setText(QCoreApplication::translate(
        "Deposit",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320"
        "\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:",
        nullptr));
    label_7->setText(QCoreApplication::translate(
        "Deposit", "\320\264\320\275\320\265\320\271", nullptr));
    label_9->setText(QCoreApplication::translate(
        "Deposit",
        "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321"
        "\217 \321\201\321\202\320\260\320\262\320\272\320\260:",
        nullptr));
    ui_nalog->setText(QString());
    label_10->setText(QCoreApplication::translate(
        "Deposit",
        "\320\242\320\270\320\277 "
        "\320\262\321\213\320\277\320\273\320\260\321\202\321\213",
        nullptr));
    ui_capital_procent->setText(QCoreApplication::translate(
        "Deposit",
        "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320"
        "\267\320\260\321\206\320\270\321\217 "
        "\320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320"
        "\262 (F1)",
        nullptr));
#if QT_CONFIG(shortcut)
    ui_capital_procent->setShortcut(
        QCoreApplication::translate("Deposit", "F1", nullptr));
#endif  // QT_CONFIG(shortcut)
    ui_type->setItemText(0, QCoreApplication::translate(
                                "Deposit",
                                "\320\232\320\260\320\266\320\264\321\213\320"
                                "\271 \320\264\320\265\320\275\321\214",
                                nullptr));
    ui_type->setItemText(1, QCoreApplication::translate(
                                "Deposit",
                                "\320\232\320\260\320\266\320\264\321\213\320"
                                "\271 \320\274\320\265\321\201\321\217\321\206",
                                nullptr));
    ui_type->setItemText(
        2, QCoreApplication::translate(
               "Deposit",
               "\320\232\320\260\320\266\320\264\321\213\320\271 "
               "\320\272\320\262\320\260\321\200\321\202\320\260\320\273",
               nullptr));
    ui_type->setItemText(
        3, QCoreApplication::translate(
               "Deposit",
               "\320\232\320\260\320\266\320\264\321\213\320\265 "
               "\320\277\320\276\320\273\320\263\320\276\320\264\320\260",
               nullptr));
    ui_type->setItemText(
        4, QCoreApplication::translate("Deposit",
                                       "\320\232\320\260\320\266\320\264\321"
                                       "\213\320\271 \320\263\320\276\320\264",
                                       nullptr));

    label_11->setText(QCoreApplication::translate(
        "Deposit",
        "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320"
        "\275\321\213\320\265 %:",
        nullptr));
    label_17->setText(QCoreApplication::translate(
        "Deposit",
        "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 "
        "\320\262\320\272\320\273\320\260\320\264\320\265",
        nullptr));
    ui_pay_procent->setText(
        QCoreApplication::translate("Deposit", "0", nullptr));
    ui_last_deposit->setText(
        QCoreApplication::translate("Deposit", "0", nullptr));
    label_18->setText(QCoreApplication::translate(
        "Deposit",
        "\320\272 \320\272\320\276\320\275\321\206\321\203 "
        "\321\201\321\200\320\276\320\272\320\260:",
        nullptr));
    label_19->setText(QCoreApplication::translate("Deposit", "%", nullptr));
    label_20->setText(QCoreApplication::translate("Deposit", "%", nullptr));
    ui_day_deposit->setText(QString());
    ui_sum_day_deposit->setText(QString());
    label_15->setText(QCoreApplication::translate(
        "Deposit", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
    label_21->setText(QCoreApplication::translate(
        "Deposit", "\320\224\320\265\320\275\321\214:", nullptr));
    ui_day_pay->setText(QString());
    ui_sum_day_pay->setText(QString());
    label_22->setText(QCoreApplication::translate(
        "Deposit", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
    label_23->setText(
        QCoreApplication::translate("Deposit", "\321\203.\320\265.", nullptr));
    label_24->setText(
        QCoreApplication::translate("Deposit", "\321\203.\320\265.", nullptr));
    label_25->setText(QCoreApplication::translate(
        "Deposit",
        "\320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320"
        "\267\320\260\321\206\320\270\320\270:",
        nullptr));
    pushButton_add->setText(
        QCoreApplication::translate("Deposit",
                                    "\320\237\320\276\320\277\320\276\320\273"
                                    "\320\275\320\265\320\275\320\270\320\265",
                                    nullptr));
    pushButton_take->setText(QCoreApplication::translate(
        "Deposit", "\320\230\320\267\321\212\321\217\321\202\320\270\320\265",
        nullptr));
    transactions->setPlainText(QString());
    label_26->setText(
        QCoreApplication::translate("Deposit",
                                    "\320\237\320\276\320\277\320\276\320\273"
                                    "\320\275\320\270\321\202\321\214:",
                                    nullptr));
  }  // retranslateUi
};

namespace Ui {
class Deposit : public Ui_Deposit {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_VIEW_DEPOSIT_H
