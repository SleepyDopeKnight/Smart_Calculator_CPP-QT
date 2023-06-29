#include "view_credit.h"

#include "ui_view_credit.h"

Credit::Credit(QWidget *parent) : QDialog(parent), ui(new Ui::Credit) {
  ui->setupUi(this);

  setWindowTitle("Credit Calculator");

  auto numeric_valid = new QDoubleValidator(-1000000000, 1000000000, 6, this);
  numeric_valid->setNotation(QDoubleValidator::StandardNotation);

  ui->ui_sum_credit->setValidator(numeric_valid);
  ui->ui_time_credit->setValidator(new QIntValidator(-1000000000, 1000000000, this));
  ui->ui_procent->setValidator(numeric_valid);
}

Credit::~Credit() { delete ui; }

void Credit::on_pushButton_res_clicked() {
  s21::Finance::credit creditqt = {0, 0, 0, 0, 0, 0, 0};
  creditqt.sum_credit = ui->ui_sum_credit->text().toDouble();
  creditqt.time_credit = ui->ui_time_credit->text().toInt();
  creditqt.procent = ui->ui_procent->text().toDouble();
  if (ui->radioButton_type1->isChecked()) {
    creditqt.type = 1;
  } else if (ui->radioButton_type2->isChecked()) {
    creditqt.type = 2;
  }
  if (controller_.GetCredit(&creditqt)) {
    ui->err->setText("");
    ui->ui_sum_pay->setText(QString::number(creditqt.sum_pay, 'g', 15));
    ui->ui_over_pay->setText(QString::number(creditqt.over_pay, 'g', 15));
    ui->ui_month_pay->setText(QString::number(creditqt.month_pay, 'g', 15));
  } else {
    ui->err->setText("Invalid input");
    ui->ui_sum_pay->setText("0");
    ui->ui_over_pay->setText("0");
    ui->ui_month_pay->setText("0");
  }
}
