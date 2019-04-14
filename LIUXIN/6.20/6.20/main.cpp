#include<iostream>
#include<cmath>
using namespace std;

bool multiple(double,double);
int main()
{
    int x,y;
    cout<<"Please input two integer numbers: ";
    loop:cin >> x >> y;
    cout<<boolalpha<<multiple( x, y )<<endl;
    if( multiple( x,y )==1 )
       cout << " true\n ";
   else
cout << " false\n ";
 goto loop;
}
bool  multiple( double number1, double number2 )
{
    if(ceil(number2/number1) == floor(number2/number1) )
        return true;
    else
        return false;
}
