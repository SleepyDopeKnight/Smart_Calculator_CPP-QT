#include "view_deposit.h"

#include "ui_view_deposit.h"

Deposit::Deposit(QWidget *parent) : QDialog(parent), ui(new Ui::Deposit) {
  ui->setupUi(this);

  setWindowTitle("Deposit Calculator");

  auto numeric_valid = new QDoubleValidator(-1000000000, 1000000000, 6, this);
  numeric_valid->setNotation(QDoubleValidator::StandardNotation);

 ui->ui_sum_deposit->setValidator(numeric_valid);
 ui->ui_time_deposit->setValidator(new QIntValidator(-1000000000, 1000000000, this));
 ui->ui_procent->setValidator(numeric_valid);
 ui->ui_nalog->setValidator(numeric_valid);
 ui->ui_sum_day_deposit->setValidator(numeric_valid);
 ui->ui_day_deposit->setValidator(new QIntValidator(-1000000000, 1000000000, this));
 ui->ui_day_pay->setValidator(new QIntValidator(-1000000000, 1000000000, this));
}

Deposit::~Deposit() { delete ui; }

void Deposit::on_pushButton_res_clicked() {
  s21::Finance::deposit depositqt = {};
  char str[10000] = {};
  QByteArray ba = ui->transactions->toPlainText().toLatin1();
  strncpy(str, ba, ui->transactions->toPlainText().length() + 1);
  controller_.GetTransactions(&depositqt, str);
  depositqt.sum_deposit = ui->ui_sum_deposit->text().toDouble();
  depositqt.time_deposit = ui->ui_time_deposit->text().toInt();
  depositqt.procent = ui->ui_procent->text().toDouble();
  depositqt.nalog = ui->ui_nalog->text().toDouble();
  if (ui->ui_capital_procent->isChecked()) depositqt.capital_procent = 1;
  if (ui->ui_type->currentText() == "Каждый день") {
    depositqt.type = 1;
  } else if (ui->ui_type->currentText() == "Каждый месяц") {
    depositqt.type = 2;
  } else if (ui->ui_type->currentText() == "Каждый квартал") {
    depositqt.type = 3;
  } else if (ui->ui_type->currentText() == "Каждые полгода") {
    depositqt.type = 4;
  } else if (ui->ui_type->currentText() == "Каждый год") {
    depositqt.type = 5;
  }
  if (controller_.GetDeposit(&depositqt)) {
    ui->err->setText("");
    ui->ui_pay_procent->setText(
        QString::number(depositqt.pay_procent, 'g', 15));
    ui->ui_sum_nalog->setText(QString::number(depositqt.sum_nalog, 'g', 15));
    ui->ui_last_deposit->setText(
        QString::number(depositqt.last_deposit, 'g', 15));
  } else {
    ui->err->setText("Invalid\n input");
    ui->ui_pay_procent->setText("0");
    ui->ui_sum_nalog->setText("0");
    ui->ui_last_deposit->setText("0");
  }
}

void Deposit::on_pushButton_add_clicked() {
  QString res = ui->transactions->toPlainText();
  ui->transactions->setPlainText(
      res +
      "Day deposit: " + QString::number(ui->ui_day_deposit->text().toInt()) +
      " | sum: " + QString::number(ui->ui_sum_day_deposit->text().toDouble()) +
      '\n');
}

void Deposit::on_pushButton_take_clicked() {
  QString res = ui->transactions->toPlainText();
  ui->transactions->setPlainText(
      res + "Day pay: " + QString::number(ui->ui_day_pay->text().toInt()) +
      " | sum: " + QString::number(ui->ui_sum_day_pay->text().toDouble()) +
      '\n');
}
