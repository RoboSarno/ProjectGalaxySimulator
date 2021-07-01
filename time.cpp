#include "time.hpp"
using namespace std;

Time::Time()
{
}

Time::~Time()
{
}
int setMonth(string m)
{
    if (m == "Jan")
        return 1;
    if (m == "Feb")
        return 2;
    if (m == "Mar")
        return 3;
    if (m == "Apr")
        return 4;
    if (m == "May")
        return 5;
    if (m == "Jun")
        return 6;
    if (m == "Jul")
        return 7;
    if (m == "Aug")
        return 8;
    if (m == "Sep")
        return 9;
    if (m == "Oct")
        return 10;
    if (m == "Nov")
        return 11;
    if (m == "Dec")
        return 12;
    else
        return -99;
}

// setTime() gets the current time and adds all variables to the Time class
// should only be called in the constructor and use updateTime() to change time in sim
void Time::setTime()
{
    string d = "";
    string m = "";
    int y;
    string min = "";
    string hr = "";

    //get current time from ctime
    time_t current_time;
    current_time = time(NULL);
    char *tm = ctime(&current_time);
    string t = tm; //convert the char pointer to a string

    y = stoi(t.substr(20, 24));
    t = t.substr(4, 17);
    stringstream ss;

    ss << t;
    getline(ss, m, ' ');
    getline(ss, d, ' ');
    getline(ss, hr, ':');
    getline(ss, min, ':');

    _day = stoi(d);
    _month = setMonth(m); // get the month's int value instead of string
    _year = y;
    _hour = stoi(hr);
    _minutes = stoi(min);
}

void Time::updateTime()
{ //only changes the hour and the minutes not the date
    string hour;
    string minutes;

    time_t current_time;
    current_time = time(NULL);
    char *tm = ctime(&current_time);
    string t = tm;

    t = t.substr(11, 16);
    stringstream ss;
    ss << t;
    getline(ss, hour, ':');
    getline(ss, minutes, ':');
    _hour = stoi(hour);
    _minutes = stoi(minutes);
}

int Time::getDay()
{
    return _day;
}

int Time::getMonth()
{
    return _month;
}

int Time::getYear()
{
    return _year;
}

int Time::getHour()
{
    return _hour;
}

int Time::getMinutes()
{
    return _minutes;
}
/*
==================================================
REMEMBER TO CHANGE ALL TIME RELATED VARIABLES!!!
==================================================
*/
void Time::addDay(int d)
{
    _day += d;
}
void Time::addMonth(int m)
{
    _month += m;
}

void Time::addYear(int y)
{
    _year += y;
}
