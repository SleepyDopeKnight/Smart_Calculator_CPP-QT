#ifndef SMART_CALCULATOR_CPP_VIEW_VIEW_DEPOSIT_H_
#define SMART_CALCULATOR_CPP_VIEW_VIEW_DEPOSIT_H_

#include <QDialog>
#include <QKeyEvent>

#include "../controller/controller_smart_calc.h"

namespace Ui {
class Deposit;
}

class Deposit : public QDialog {
  Q_OBJECT

 public:
  explicit Deposit(QWidget *parent = nullptr);
  ~Deposit();

 private slots:
  void on_pushButton_res_clicked();
  void on_pushButton_add_clicked();
  void on_pushButton_take_clicked();

 private:
  s21::Controller controller_;
  Ui::Deposit *ui;
};

#endif  // SMART_CALCULATOR_CPP_VIEW_VIEW_DEPOSIT_H_
