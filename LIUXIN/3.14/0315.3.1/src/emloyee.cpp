#include "emloyee.h"
#include<iostream>
#include<string>
using namespace std;
emloyee::emloyee()
{
    //ctor
}

emloyee::~emloyee()
{
    //dtor
}

void emloyee::setfname(string F_name)
{
    Fname = F_name;
}

void emloyee::setlname(string L_name)
{
    Lname = L_name;
}

void emloyee::setpay(int pay)
{
    if (pay > 0)
    {
        Pay = pay;
    }
    else
    {
        Pay = 0;
    }
}

string emloyee::getfname()
{
    return Fname;
}

string emloyee::getlname()
{
    return Lname;
}

int emloyee::getpay()
{
    return Pay;
}

void emloyee::diaplayMessage()
{
    cout << "Ա��������Ϊ" << getfname() << getlname() <<"��нˮΪ" <<getpay() << "��нΪ" << getpay()*12<<"��н����нΪ"<< getpay()*1.1*12 <<endl ;
}
