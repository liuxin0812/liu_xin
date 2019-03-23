#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;

class Date
{
    public:
        Date();
        void setmonth(int _month);
        void setday(int _day);
        void setyear(int _year);

        int getmonth();
        int getday();
        int getyear();
        void displayDate();

        virtual ~Date();

    protected:

    private:
        int Month;
        int Day;
        int Year;

};

#endif // DATE_H
