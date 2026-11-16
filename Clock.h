#pragma once
class Clock {
public:
  // constructors -- (sometimes called ctor)
  Clock();  // default 
  Clock(int mpd); /// one parameter constructor
  Clock(int mpd, int m); /// two parameter constructor

  /**
   * @brief advance this clock by one minute
   */
  void tick();

  /**
   * @brief print the time in hhh:mm format
   */
  void printTime(bool newline = false);

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
