#include "Clock.h"
#include <iostream>
#include <format>
// ctors
Clock::Clock() {
  // default
  minute = 0;
  minutesPerDay = 1440;
}

Clock::Clock(int mpd) {
  minutesPerDay = mpd;
  minute = 0;
}

Clock::Clock(int mpd, int m) {
  minutesPerDay = mpd;
  minute = m % mpd;
}


void Clock::tick() {
  minute++;
  minute %= minutesPerDay;
}

void Clock::printTime(bool newline) {
  using namespace std;
  /* the iomanip way
  cout << setw(2) << setfill('0') << (minute / 60);
  cout << ":";
  cout << setw(2) << setfill('0') << (minute % 60);
  */
  cout << format("{0:0>2}:{1:0>2}", (minute / 60), (minute % 60));
  if (newline) cout << endl;
}

int Clock::getMinute() {
  return minute;
}

int Clock::getMinutesPerDay() {
  return minutesPerDay;
}

void Clock::setMinute(int m) {
  minute = m;
}

void Clock::setMinutesPerDay(int mpd) {
  minutesPerDay = mpd;
}