#ifndef SMART_CALCULATOR_CPP_VIEW_VIEW_SMART_CALC_H_
#define SMART_CALCULATOR_CPP_VIEW_VIEW_SMART_CALC_H_

#include <QDoubleValidator>
#include <QKeyEvent>
#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include <QtMath>

#include "../controller/controller_smart_calc.h"
#include "../credit_calc_view/view_credit.h"
#include "../deposit_calc_view/view_deposit.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void DigitsNumbers();
  void AriphNumbers();
  void TrigonomyNumbers();
  void on_pushButton_dot_clicked();
  void on_pushButton_unar_clicked();
  void on_pushButton_AC_clicked();
  void on_pushButton_eq_clicked();
  void on_pushButton_backspace_clicked();
  void on_pushButton_graph_clicked();
  void on_pushButton_credit_clicked();
  void on_pushButton_deposit_clicked();

 private:
  s21::Controller controller_;
  double x_begin_, x_end_, h_, X_, xy_1_, xy_2_, result_1_, result_2_;
  int N_;

  QVector<double> x_, y_;

  Ui::MainWindow *ui;
};

#endif  // SMART_CALCULATOR_CPP_VIEW_VIEW_SMART_CALC_H_
