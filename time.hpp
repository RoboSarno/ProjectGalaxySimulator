#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
#include <ctime>
#include <sstream>

class Time
{
public:
  Time();
  ~Time();
  void updateTime();
  int getDay();
  int getMonth();
  int getYear();
  int getHour();
  int getMinutes();
  void addDay(int dayAmount);
  void addMonth(int monthAmount);
  void addYear(int yearAmount);
  void setTime();

private:
  int _day;
  int _month;
  int _year;
  int _hour;
  int _minutes;
};
#endif