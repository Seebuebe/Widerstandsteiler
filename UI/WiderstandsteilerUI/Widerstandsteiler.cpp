#include "Widerstandsteiler.h"
#include <iostream>
#include "QMessageBox"  //Wird verwendet um die Anzeigebox einzufügen
#include "ui_Widerstandsteiler.h"

Widerstandsteiler::Widerstandsteiler(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::Widerstandsteiler)
{
  ui->setupUi(this);

  // QPixmap pix(
  //    "/Documents/Widerstandsteiler/Widerstandsteiler/UI/WiderstandsteilerUI/"
  //    "Images/bild2.png");  // Bild Importieren
  // ui->Picture->setPixmap(pix);

  QPixmap pix(

      "/Documents/Widerstandsteiler/Widerstandsteiler/UI/     "
      "WiderstandsteilerUI/");  // Bild Importieren
  ui->Picture->setPixmap(pix);

  // this->setStyleSheet("background-color: black;");
}

Widerstandsteiler::~Widerstandsteiler()
{
  delete ui;
}

void Widerstandsteiler::on_pushButton_clicked()  // Event Bei drücken des Push
                                                 // Buttons
{
  QString Rmax = ui->MaxResStr->text();  // Einlesen der Eingabe Werte
  QString Uin = ui->UinStr->text();
  QString Uout = ui->UoutStr->text();
  QString EReihe = ui->EReihe->text();

  double UinD = 0;
  double UoutD = 0;
  double RmaxD = 0;

  double ResRet1 = 0;
  double ResRet2 = 0;
  double UoutRet = 0;
  double Fehler = 0;

  UinD = Uin.toDouble();  // Umwandlung unser String Werte zu Double
  UoutD = Uout.toDouble();
  RmaxD = Rmax.toDouble();

  if (UinD < UoutD || UinD < 0 || UoutD < 0)
  {
    QMessageBox::warning(this, "Error", "Falsche Eingabe");
  }
  else  // Ausgänge Beschreiben
  {
    ui->Res1->setNum(ResRet1);
    ui->Res2->setNum(ResRet2);
    ui->FehlerVal->setNum(Fehler);
    ui->UoutVal->setNum(UoutRet);
  }
}
