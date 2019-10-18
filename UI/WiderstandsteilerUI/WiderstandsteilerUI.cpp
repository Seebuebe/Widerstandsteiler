#include "WiderstandsteilerUI.h"
#include "ui_WiderstandsteilerUI.h"

WiderstandsteilerUI::WiderstandsteilerUI(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::WiderstandsteilerUI)
{
  ui->setupUi(this);
}

WiderstandsteilerUI::~WiderstandsteilerUI()
{
  delete ui;
}
