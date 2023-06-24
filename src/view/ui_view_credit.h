/********************************************************************************
** Form generated from reading UI file 'view_credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SMART_CALCULATOR_CPP_VIEW_UI_VIEW_CREDIT_H_
#define SMART_CALCULATOR_CPP_VIEW_UI_VIEW_CREDIT_H_ 

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Credit {
 public:
  QLabel *label;
  QLabel *label_2;
  QLabel *label_3;
  QLabel *label_4;
  QLabel *label_5;
  QLabel *label_6;
  QLabel *label_7;
  QLabel *label_8;
  QRadioButton *radioButton_type1;
  QRadioButton *radioButton_type2;
  QLineEdit *ui_sum_credit;
  QLineEdit *ui_time_credit;
  QLineEdit *ui_procent;
  QLabel *ui_sum_pay;
  QLabel *ui_over_pay;
  QLabel *ui_month_pay;
  QLabel *label_12;
  QLabel *label_13;
  QLabel *label_14;
  QLabel *label_15;
  QLabel *label_16;
  QPushButton *pushButton_res;
  QFrame *line_2;
  QFrame *line_3;
  QFrame *line_4;
  QFrame *line_5;
  QLabel *err;
  QFrame *line_6;

  void setupUi(QDialog *Credit) {
    if (Credit->objectName().isEmpty())
      Credit->setObjectName(QString::fromUtf8("Credit"));
    Credit->resize(632, 504);
    Credit->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "background-color: rgb(42, 39, 41);"));
    label = new QLabel(Credit);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(20, 50, 201, 31));
    label->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_2 = new QLabel(Credit);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 100, 181, 31));
    label_2->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_3 = new QLabel(Credit);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(20, 150, 191, 31));
    label_3->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_4 = new QLabel(Credit);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 250, 221, 31));
    label_4->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_5 = new QLabel(Credit);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(20, 290, 111, 51));
    label_5->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_6 = new QLabel(Credit);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(20, 350, 211, 31));
    label_6->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_7 = new QLabel(Credit);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(530, 110, 41, 21));
    label_7->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_8 = new QLabel(Credit);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(20, 440, 171, 31));
    label_8->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    radioButton_type1 = new QRadioButton(Credit);
    radioButton_type1->setObjectName(QString::fromUtf8("radioButton_type1"));
    radioButton_type1->setGeometry(QRect(260, 440, 161, 20));
    radioButton_type2 = new QRadioButton(Credit);
    radioButton_type2->setObjectName(QString::fromUtf8("radioButton_type2"));
    radioButton_type2->setGeometry(QRect(260, 470, 191, 21));
    ui_sum_credit = new QLineEdit(Credit);
    ui_sum_credit->setObjectName(QString::fromUtf8("ui_sum_credit"));
    ui_sum_credit->setGeometry(QRect(260, 40, 261, 41));
    ui_sum_credit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_time_credit = new QLineEdit(Credit);
    ui_time_credit->setObjectName(QString::fromUtf8("ui_time_credit"));
    ui_time_credit->setGeometry(QRect(260, 90, 261, 41));
    ui_time_credit->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_procent = new QLineEdit(Credit);
    ui_procent->setObjectName(QString::fromUtf8("ui_procent"));
    ui_procent->setGeometry(QRect(260, 140, 261, 41));
    ui_procent->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_sum_pay = new QLabel(Credit);
    ui_sum_pay->setObjectName(QString::fromUtf8("ui_sum_pay"));
    ui_sum_pay->setGeometry(QRect(260, 240, 261, 41));
    ui_sum_pay->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_over_pay = new QLabel(Credit);
    ui_over_pay->setObjectName(QString::fromUtf8("ui_over_pay"));
    ui_over_pay->setGeometry(QRect(260, 290, 261, 41));
    ui_over_pay->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    ui_month_pay = new QLabel(Credit);
    ui_month_pay->setObjectName(QString::fromUtf8("ui_month_pay"));
    ui_month_pay->setGeometry(QRect(260, 340, 261, 41));
    ui_month_pay->setStyleSheet(
        QString::fromUtf8("   border: 1px rgb(42, 39, 41);\n"
                          "   border-radius: 0px;\n"
                          "   font: 30pt;\n"
                          "   background-color: rgb(68, 65, 66);"));
    label_12 = new QLabel(Credit);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(530, 50, 41, 31));
    label_12->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_13 = new QLabel(Credit);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(530, 160, 31, 21));
    label_13->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_14 = new QLabel(Credit);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(530, 250, 41, 31));
    label_14->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_15 = new QLabel(Credit);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(530, 300, 41, 31));
    label_15->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    label_16 = new QLabel(Credit);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setGeometry(QRect(530, 350, 41, 31));
    label_16->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 19pt;\n"
                          "background-color: rgb(42, 39, 41);"));
    pushButton_res = new QPushButton(Credit);
    pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
    pushButton_res->setGeometry(QRect(470, 430, 141, 61));
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
    line_2 = new QFrame(Credit);
    line_2->setObjectName(QString::fromUtf8("line_2"));
    line_2->setGeometry(QRect(40, 210, 118, 3));
    line_2->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_2->setFrameShape(QFrame::HLine);
    line_2->setFrameShadow(QFrame::Sunken);
    line_3 = new QFrame(Credit);
    line_3->setObjectName(QString::fromUtf8("line_3"));
    line_3->setGeometry(QRect(150, 210, 118, 3));
    line_3->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);
    line_4 = new QFrame(Credit);
    line_4->setObjectName(QString::fromUtf8("line_4"));
    line_4->setGeometry(QRect(260, 210, 118, 3));
    line_4->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_4->setFrameShape(QFrame::HLine);
    line_4->setFrameShadow(QFrame::Sunken);
    line_5 = new QFrame(Credit);
    line_5->setObjectName(QString::fromUtf8("line_5"));
    line_5->setGeometry(QRect(370, 210, 118, 3));
    line_5->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_5->setFrameShape(QFrame::HLine);
    line_5->setFrameShadow(QFrame::Sunken);
    err = new QLabel(Credit);
    err->setObjectName(QString::fromUtf8("err"));
    err->setGeometry(QRect(220, 390, 231, 41));
    err->setStyleSheet(
        QString::fromUtf8("border: 1px rgb(42, 39, 41);\n"
                          "border-radius: 1px;\n"
                          "font: 35pt;\n"
                          "background-color: rgb(42, 39, 41);\n"
                          "color: red;"));
    line_6 = new QFrame(Credit);
    line_6->setObjectName(QString::fromUtf8("line_6"));
    line_6->setGeometry(QRect(440, 210, 118, 3));
    line_6->setStyleSheet(
        QString::fromUtf8("   border: 4px solid grey;\n"
                          "   border-radius: 0px;"));
    line_6->setFrameShape(QFrame::HLine);
    line_6->setFrameShadow(QFrame::Sunken);

    retranslateUi(Credit);

    QMetaObject::connectSlotsByName(Credit);
  }  // setupUi

  void retranslateUi(QDialog *Credit) {
    Credit->setWindowTitle(
        QCoreApplication::translate("Credit", "Dialog", nullptr));
    label->setText(QCoreApplication::translate(
        "Credit",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\276\320\262\320"
        "\260\320\275\320\270\321\217:",
        nullptr));
    label_2->setText(QCoreApplication::translate(
        "Credit",
        "\320\241\321\200\320\276\320\272 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\276\320\262\320"
        "\260\320\275\320\270\321\217:",
        nullptr));
    label_3->setText(QCoreApplication::translate(
        "Credit",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320"
        "\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:",
        nullptr));
    label_4->setText(QCoreApplication::translate(
        "Credit",
        "\320\236\320\261\321\211\320\260\321\217 "
        "\321\201\321\203\320\274\320\274\320\260 "
        "\320\262\321\213\320\277\320\273\320\260\321\202\321\213:",
        nullptr));
    label_5->setText(
        QCoreApplication::translate("Credit",
                                    "\320\237\320\265\321\200\320\265\320\277"
                                    "\320\273\320\260\321\202\320\260:",
                                    nullptr));
    label_6->setText(QCoreApplication::translate(
        "Credit",
        "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320"
        "\275\321\213\320\271 "
        "\320\277\320\273\320\260\321\202\320\265\320\266:",
        nullptr));
    label_7->setText(QCoreApplication::translate(
        "Credit", "\320\274\320\265\321\201.", nullptr));
    label_8->setText(QCoreApplication::translate(
        "Credit",
        "\320\242\320\270\320\277 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\276\320\262\320"
        "\260\320\275\320\270\321\217:",
        nullptr));
    radioButton_type1->setText(QCoreApplication::translate(
        "Credit",
        "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320"
        "\275\321\213\320\271 (F1)",
        nullptr));
#if QT_CONFIG(shortcut)
    radioButton_type1->setShortcut(
        QCoreApplication::translate("Credit", "F1", nullptr));
#endif  // QT_CONFIG(shortcut)
    radioButton_type2->setText(QCoreApplication::translate(
        "Credit",
        "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321"
        "\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213"
        "\320\271 (F2)",
        nullptr));
#if QT_CONFIG(shortcut)
    radioButton_type2->setShortcut(
        QCoreApplication::translate("Credit", "F2", nullptr));
#endif  // QT_CONFIG(shortcut)
    ui_sum_pay->setText(QCoreApplication::translate("Credit", "0", nullptr));
    ui_over_pay->setText(QCoreApplication::translate("Credit", "0", nullptr));
    ui_month_pay->setText(QCoreApplication::translate("Credit", "0", nullptr));
    label_12->setText(
        QCoreApplication::translate("Credit", "\321\203.\320\265.", nullptr));
    label_13->setText(QCoreApplication::translate("Credit", "%", nullptr));
    label_14->setText(
        QCoreApplication::translate("Credit", "\321\203.\320\265.", nullptr));
    label_15->setText(
        QCoreApplication::translate("Credit", "\321\203.\320\265.", nullptr));
    label_16->setText(
        QCoreApplication::translate("Credit", "\321\203.\320\265.", nullptr));
    pushButton_res->setText(
        QCoreApplication::translate("Credit",
                                    "\320\240\320\260\321\201\321\201\321\207"
                                    "\320\270\321\202\320\260\321\202\321\214",
                                    nullptr));
#if QT_CONFIG(shortcut)
    pushButton_res->setShortcut(
        QCoreApplication::translate("Credit", "Return", nullptr));
#endif  // QT_CONFIG(shortcut)
    err->setText(QString());
  }  // retranslateUi
};

namespace Ui {
class Credit : public Ui_Credit {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // SMART_CALCULATOR_CPP_VIEW_UI_VIEW_CREDIT_H_
