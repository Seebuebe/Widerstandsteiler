#include "Widerstandsteiler.h"
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include "../../algorithm/Ecalc.h"  //Backend Code
#include "QMessageBox"  //Wird verwendet um die Anzeigebox einzufügen
#include "ui_Widerstandsteiler.h"

using namespace std;

/**
 * @brief Widerstandsteiler::Widerstandsteiler
 * @param parent
 */
Widerstandsteiler::Widerstandsteiler(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::Widerstandsteiler)
{
  ui->setupUi(this);
}

Widerstandsteiler::~Widerstandsteiler()
{
  delete ui;
}

/**
 * @brief Uin Die Funktion wird verwendet um Ausnahmen abzufangen und alle Daten
in ihren Vorgesehenen typ umzuwamdeln
 */
void Widerstandsteiler::on_pushButton_clicked()  // Event Bei drücken des Push
                                                 // Buttons
{
  QString Uin = ui->UinStr->text();
  QString Uout = ui->UoutStr->text();
  QString EReihe = ui->EReiheInp->text();

  double UinD = 0;
  double UoutD = 0;
  double RmaxD = 0;

  double ResRet1 = 0;
  double ResRet2 = 0;
  double UoutRet = 0;
  double Fehler = 0;
  double EreiheInt = 0;

  int UinSize = 0;
  int UoutSize = 0;
  bool isNum = false;

  Ecalc ecalc;

  UinSize = Uin.size();  // Bestimmen ob Leerer wert. Lehr wird abgefangen
  UoutSize = Uout.size();

  std::string EReiheStr;

  EReiheStr = EReihe.toStdString();  // Umwandlung in String

  UinD = Uin.toDouble(&isNum);  // Umwandlung unser String Werte zu Double
  UoutD = Uout.toDouble(&isNum);

  if (EReiheStr == "E3")
  {
    EreiheInt = 3;
  }
  else if (EReiheStr == "E6")
  {
    EreiheInt = 6;
  }
  else if (EReiheStr == "E12")
  {
    EreiheInt = 12;
  }
  else if (EReiheStr == "E24")
  {
    EreiheInt = 24;
  }
  else if (EReiheStr == "E48")
  {
    EreiheInt = 48;
  }
  else if (EReiheStr == "E96")
  {
    EreiheInt = 96;
  }
  else if (EReiheStr == "E192")
  {
    EreiheInt = 192;
  }
  if (isNum)
  {
    if (ecalc.calculate(UinD, UoutD, EreiheInt, RmaxD))  // Ausgänge Beschreiben
    {
      ResRet1 = ecalc.getResistor1();  // Funktionsaufrufe
      ResRet2 = ecalc.getResistor2();
      UoutRet = ecalc.getOutput();
      Fehler = ecalc.getErrorRel();

      ui->Res1->setNum(ResRet1);  // Rückgabewerte ausgeben
      ui->Res2->setNum(ResRet2);
      ui->FehlerVal->setNum(Fehler);
      ui->UoutVal->setNum(UoutRet);
    }
    else
    {
      QMessageBox::warning(this, "Error", "Falsche Eingabe");
    }
  }
  else
  {
    QMessageBox::warning(this, "Error", "Falsche Eingabe");
  }
}

static int i = 0;
/**
 * @brief Widerstandsteiler::on_EReiheDown_clicked Bei Klick wird aus dem String
 der Entsprechende E Wert ausgewählt Pro Klick wird der string um 1
 dekrementiert
 */
void Widerstandsteiler::on_EReiheDown_clicked()
{
  if (i > 0)
  {
    i--;
    static QString EString[] = {"E3", "E6", "E12", "E24", "E48", "E96", "E192"};
    ui->EReiheInp->setText(EString[i]);
  }
}

/**
 * @brief Widerstandsteiler::on_EReiheUp_clicked Bei Klick wird aus dem String
 der Entsprechende E Wert ausgewählt Pro Klick wird der string um 1
 dekrementiert
 */

void Widerstandsteiler::on_EReiheUp_clicked()
{
  if (i < 6)
  {
    i++;
    static QString EString[] = {"E3", "E6", "E12", "E24", "E48", "E96", "E192"};
    ui->EReiheInp->setText(EString[i]);
  }
}
