#include <QApplication>
#include "Widerstandsteiler.h"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  Widerstandsteiler w;
  w.show();

  return a.exec();
}
