/**
* main.cpp in clockClass-c02
*/
#include <iostream>
#include <format>
#include <iomanip>
#include "Clock.h"
#include "helpers.h"
using namespace std;


int main() {
  welcome();  // this will come from helpers.h

  Clock earth = {};
  // earth.minutesPerDay = 60 * 24;
  earth.setMinutesPerDay(1440);
  //earth.minute = 860;
  earth.setMinute(900);

  cout << earth.getMinute() << endl;
  cout << earth.getMinutesPerDay() << endl;

  cout << "\nOn Earth: " << endl;
  earth.printTime(true);
  earth.tick();
  earth.printTime();

  Clock mars(1479);
  cout << "\nOn Mars: ";
  mars.printTime();

  Clock tauceti3(799, 1000);
  cout << "\nTau Ceti 3: ";
  tauceti3.printTime();

  return 0;
}