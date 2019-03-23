#include <iostream>
#include<Date.h>
using namespace std;

int main()
{
    int _month;
    int _day;
    int _year;

    Date myDate;

    cout << "ÇëÊäÈëÈÕÆÚ"<<endl;
    cin >> _month >>_day >> _year;
    myDate.setmonth(_month);
    myDate.setday(_day);
    myDate.setyear(_year);
    cout << endl;

    myDate.displayDate();
    return 0;
}
