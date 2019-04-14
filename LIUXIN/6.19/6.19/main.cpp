#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double hypotenuse(double,double);

int main()
{
    double a,b;
    cout<<"±ß1:";
    cin >> a;
    cout<<"±ß2:";
    cin >> b;
    cout << "hypotenuse = "<< fixed << setprecision(2)<<hypotenuse( a ,b )<<endl;
}
double hypotenuse( double side1,double side2)
{
    return sqrt( side1*side1+side2*side2 );
}
