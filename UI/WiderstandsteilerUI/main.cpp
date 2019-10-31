#include "Widerstandsteiler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Widerstandsteiler w;
  w.show();

  return a.exec();
}
