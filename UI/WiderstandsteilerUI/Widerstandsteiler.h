#ifndef WIDERSTANDSTEILER_H
#define WIDERSTANDSTEILER_H

#include <QMainWindow>

namespace Ui
{
class Widerstandsteiler;
}

class Widerstandsteiler : public QMainWindow
{
  Q_OBJECT

 public:
  explicit Widerstandsteiler(QWidget* parent = nullptr);
  ~Widerstandsteiler();

 private slots:
  void on_pushButton_clicked();  // Event Bei drücken des Push
  void on_EReiheDown_clicked();
  void on_EReiheUp_clicked();

 private:
  Ui::Widerstandsteiler* ui;
};

#endif  // WIDERSTANDSTEILER_H
