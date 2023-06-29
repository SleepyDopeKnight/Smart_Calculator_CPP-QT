#ifndef SMART_CALCULATOR_CPP_VIEW_VIEW_CREDIT_H_
#define SMART_CALCULATOR_CPP_VIEW_VIEW_CREDIT_H_

#include <QDialog>
#include <QDoubleValidator>
#include <QIntValidator>
#include <QKeyEvent>

#include "../controller/controller_smart_calc.h"

namespace Ui {
class Credit;
}

class Credit : public QDialog {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

 private slots:
  void on_pushButton_res_clicked();

 private:
  s21::Controller controller_;
  Ui::Credit *ui;
};

#endif  // SMART_CALCULATOR_CPP_VIEW_VIEW_CREDIT_H_
