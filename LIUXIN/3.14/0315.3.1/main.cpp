#include <iostream>
#include<emloyee.h>
#include<string>

using namespace std;


int main()
{
    string F_name;
    string L_name;
    int pay;


    emloyee person1;


    cout <<"ÇëÊäÈëÐÕÊÏ" << endl;
    cin >> F_name;
    person1.setfname(F_name);
    cout << endl;

    cout <<"ÇëÊäÈëÃû×Ö" << endl;
    cin >> L_name;
    person1.setlname(L_name);
    cout << endl;

    cout << "ÇëÊäÈëÐ½Ë®" <<endl;
    cin >> pay;
    person1.setpay(pay);
    cout << endl ;


    emloyee person2;

    cout <<"ÇëÊäÈëÐÕÊÏ" << endl;
    cin >> F_name;
    person2.setfname(F_name);
    cout << endl;

    cout <<"ÇëÊäÈëÃû×Ö" << endl;
    cin >> L_name;
    person2.setlname(L_name);
    cout << endl;

    cout << "ÇëÊäÈëÐ½Ë®" <<endl;
    cin >> pay;
    person2.setpay(pay);
    cout <<endl;


    person1.diaplayMessage();
    person2.diaplayMessage();

    return 0;

}
