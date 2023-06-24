#include "view_smart_calc.h"

#include "ui_view_smart_calc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  setWindowTitle("Smart Calculator");
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this,
          SLOT(TrigonomyNumbers()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_del, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(AriphNumbers()));
  connect(ui->pushButton_lbracket, SIGNAL(clicked()), this,
          SLOT(DigitsNumbers()));
  connect(ui->pushButton_rbracket, SIGNAL(clicked()), this,
          SLOT(DigitsNumbers()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::DigitsNumbers() {
  QPushButton *button = (QPushButton *)sender();
  QString all_nums;
  if ((ui->result->text() == '0') || (ui->result->text() == "Invalid input"))
    ui->result->setText("");
  all_nums = (ui->result->text() + button->text());
  ui->result->setText(all_nums);
}

void MainWindow::AriphNumbers() {
  QPushButton *button = (QPushButton *)sender();
  if ((ui->result->text() == '0') || (ui->result->text() == "Invalid input"))
    ui->result->setText("");
  ui->result->setText(ui->result->text() + button->text());
}

void MainWindow::TrigonomyNumbers() {
  QPushButton *button = (QPushButton *)sender();
  if ((ui->result->text() == '0') || (ui->result->text() == "Invalid input"))
    ui->result->setText("");
  ui->result->setText(ui->result->text() + button->text() + '(');
}

void MainWindow::on_pushButton_dot_clicked() {
  ui->result->setText(ui->result->text() + ".");
}

void MainWindow::on_pushButton_unar_clicked() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label;
  double all_nums;
  if (button->text() == "+/-") {
    all_nums = (ui->result->text()).toDouble();
    all_nums = all_nums * -1;
    new_label = QString::number(all_nums, 'g', 15);
    ui->result->setText(new_label);
  }
}

void MainWindow::on_pushButton_AC_clicked() { ui->result->setText("0"); }

void MainWindow::on_pushButton_eq_clicked() {
  double x = 0;
  char str[10000] = {0};
  QByteArray ba = ui->result->text().toLatin1();
  strncpy(str, ba, ui->result->text().length() + 1);
  if (ui->value_x->text() != "") x = (ui->value_x->text().toDouble());
  if (!controller_.CheckErrors(str)) {
    ui->result->setText("Invalid input");
  } else {
    QString new_res = QString::number(controller_.GetResult(str, x), 'g', 15);
    ui->result->setText(new_res);
  }
}

void MainWindow::on_pushButton_backspace_clicked() {
  QString text = ui->result->text();
  text.chop(1);
  if (text.isEmpty()) text = "0";
  ui->result->setText(text);
}
void MainWindow::on_pushButton_graph_clicked() {
  QString send = ui->result->text();
  QByteArray ba = send.toLocal8Bit();
  char *buf = ba.data();
  ui->widget->clearGraphs();
  x_.clear();
  y_.clear();
  result_1_ = 0;
  result_2_ = 0;
  x_begin_ = 0;
  x_end_ = 0;
  h_ = 0.1;

  double Y = ui->value_x->text().toDouble();
  double X = 0;
  if (Y == 0) Y = 1;

  xy_1_ = ui->x1->text().toDouble();
  xy_2_ = ui->x2->text().toDouble();
  result_1_ = ui->y1->text().toInt();
  result_2_ = ui->y2->text().toInt();

  x_begin_ = result_2_;
  x_end_ = result_1_ + h_;

  ui->widget->xAxis->setRange(xy_2_, xy_1_);
  ui->widget->yAxis->setRange(result_2_, result_1_);
  N_ = (x_end_ - x_begin_) / h_ + 2;

  for (X = x_begin_; X <= x_end_; X += h_) {
    x_.push_back(X);
    y_.push_back(controller_.GetResult(buf, Y * X));
  }
  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x_, y_);
  ui->widget->replot();
}

void MainWindow::on_pushButton_credit_clicked() {
  Credit window;
  window.setModal(true);
  window.exec();
}

void MainWindow::on_pushButton_deposit_clicked() {
  Deposit window;
  window.setModal(true);
  window.exec();
}
