#ifndef EMLOYEE_H
#define EMLOYEE_H
#include<iostream>
using namespace std;

class emloyee
{
    public:
        emloyee();
        void setfname(string F_name);
        void setlname(string L_name);
        void setpay(int pay);

        string getfname();
        string getlname();
        int getpay();

        void diaplayMessage();
        virtual ~emloyee();

    protected:

    private:
        string Fname;
        string Lname;
        int Pay;
};

#endif // EMLOYEE_H
