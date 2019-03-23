#include "Date.h"
#include<iostream>
#include<string>
using namespace std;
Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}
void Date::setmonth(int _month)
{
    if (_month >=1&& _month <=12)
    {
        Month = _month;
    }
    else
    {
        Month =1;
    }
}

void Date::setday(int _day)
{
    Day = _day;
}

void Date::setyear(int _year)
{

        Year = _year;

}

int Date::getmonth()
{
    return Month;
}

int Date::getday()
{
    return Day;
}

int Date::getyear()
{
    return Year;
}

void Date::displayDate()
{
    cout << "½ñÌìÊÇ"<<getmonth() <<"/"<< getday() << "/" <<getyear() <<endl;
}
