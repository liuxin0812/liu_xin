#include <iostream>

using namespace std;

int integerPower(int ,int);

int main()
{
    int a,b;
    cout <<"�����������";
    cin >>a;
    cout <<"������ָ����";
    cin >>b;
    cout << "integerPower("<<a<<","<<b<<")="<<integerPower(a,b)<<endl;
}
int integerPower(int a,int b)
{
    int value1=1;
    for(int counter =1; counter <=b;counter++)
        value1*=a;
    return value1;
}
