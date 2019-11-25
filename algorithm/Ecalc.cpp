#include "../algorithm/Ecalc.h"
#include <cmath>
#include <iostream>

using namespace std;

Ecalc::Ecalc()
{
}

int Ecalc::calculate(double in, double out, double es, double maxR)
{
  uIn = in;
  uOut = out;
  series = es;
  maxResistance = maxR;
  if (in <= out || in <= 0 || out <= 0)
    return 0;
  calc();
  return 1;
}

double Ecalc::getResistor1()
{
  return r1;
}

double Ecalc::getResistor2()
{
  return r2;
}

double Ecalc::getOutput()
{
  return round((uIn * (r2 / (r1 + r2))) * 1000) / 1000;
}

double Ecalc::getErrorABS()
{
  return round(abs(uOut - getOutput()) * 1000) / 1000;
}

double Ecalc::getErrorRel()
{
  return round((getErrorABS() / getOutput()) * 1000) / 1000;
}

void Ecalc::calc()
{
  double ratio_des = uOut / uIn;
  double ratio_is;
  double ratio_error = 1;
  // double ratio_error_old = 1;
  double res1 = 0;
  double res2 = 0;

  for (int i = 0; i < series; i++)
  {
    for (int i1 = 0; i1 < series; i1++)
    {
      for (int i2 = 1; i2 < 10000; i2 *= 10)
      {
        for (int i3 = 1; i3 < 10000; i3 *= 10)
        {
          ratio_is = getR(i) * i2 / (getR(i1) * i3 + getR(i) * i2);
          if (abs(ratio_is - ratio_des) < ratio_error)
          {
            ratio_error = abs(ratio_is - ratio_des);
            res1 = getR(i1) * i3;
            res2 = getR(i) * i2;
          }
        }
      }
    }
  }
  r1 = res1;
  r2 = res2;
}

double Ecalc::getR(int number)
{
  int s = series;
  switch (s)
  {
    case 3:
      return e3[number];
      break;
    case 6:
      return e6[number];
      break;
    case 12:
      return e12[number];
      break;
    case 24:
      return e24[number];
      break;
    case 48:
      return e24[number];
      break;
    case 96:
      return e96[number];
      break;
    case 192:
      return e192[number];
      break;
  }
  return 0;
}
