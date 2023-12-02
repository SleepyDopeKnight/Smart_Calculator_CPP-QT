#include <QApplication>

#include "./view/smart_calc_view/view_smart_calc.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
