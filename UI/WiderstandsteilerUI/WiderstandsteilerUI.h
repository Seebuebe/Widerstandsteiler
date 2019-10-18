#ifndef WIDERSTANDSTEILERUI_H
#define WIDERSTANDSTEILERUI_H

#include <QMainWindow>

namespace Ui {
class WiderstandsteilerUI;
}

class WiderstandsteilerUI : public QMainWindow
{
    Q_OBJECT

  public:
    explicit WiderstandsteilerUI(QWidget *parent = nullptr);
    ~WiderstandsteilerUI();

  private:
    Ui::WiderstandsteilerUI *ui;
};

#endif // WIDERSTANDSTEILERUI_H
