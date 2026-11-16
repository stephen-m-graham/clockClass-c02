/**
* main.cpp in clockClass-c02
*/
#include <iostream>
#include <format>
#include <iomanip>
using namespace std;

class Clock {
public:
  // constructors -- (sometimes called ctor)

  /**
   * @brief advance this clock by one minute
   */
  void tick(); 

  /**
   * @brief print the time in hhh:mm format
   */
  void printTime(bool newline=false);

  /**
   * @brief get the raw minute data
   * @return the raw minute data
   */
  int getMinute();

  /**
   * @brief get the raw minutes per day data
   * @return the raw minutes per day
   */
  int getMinutesPerDay();

  /**
   * @brief set the raw minutes
   * @param[in] m int the value to be set 
   */
  void setMinute(int m);

  /**
   * @brief set the raw minutes per day
   * @param[in] mpd int the value to be set
   */
  void setMinutesPerDay(int mpd);

private:
  int minute; /// what minute is it now?
  int minutesPerDay; /// how many minutes in a day?
};

int main() {
  Clock earth = {};
  // earth.minutesPerDay = 60 * 24;
  earth.setMinutesPerDay(1440);
  //earth.minute = 860;
  earth.setMinute(900);

  cout << earth.getMinute() << endl;
  cout << earth.getMinutesPerDay() << endl;

  earth.printTime(true);
  earth.tick();
  earth.printTime();

  return 0;
}

void Clock::tick() {
  minute++;
  minute %= minutesPerDay;
}

void Clock::printTime(bool newline) {
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