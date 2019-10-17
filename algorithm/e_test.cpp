/*
 * e_test.cpp
 *
 *  Created on: Oct 10, 2019
 *      Author: user
 */

#include <iostream>
#include <math.h>
#include "Ecalc.h"

using namespace std;

int main (void) {
  Ecalc ecalc;
  ecalc.calculate(5, 1, 2, 0);
  cout << "Resistor Series E" << ecalc.getSeries() << endl;
  cout << "Resistor 1: " << ecalc.getResistor1() << endl;
  cout << "Resistor 2: " << ecalc.getResistor2() << endl;
  cout << "Output Voltage: " << ecalc.getOutput() << endl;
  cout << "Absolute Error: " << ecalc.getErrorABS() << endl;
  cout << "Relative Error: " << ecalc.getErrorRel()*100 << "%" << endl;
  return 0;
}


