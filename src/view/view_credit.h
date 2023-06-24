#ifndef VIEW_CREDIT_H
#define VIEW_CREDIT_H

#include <QDialog>
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

#endif  // VIEW_CREDIT_H
