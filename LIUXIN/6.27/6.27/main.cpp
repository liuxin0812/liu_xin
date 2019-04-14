#include <iostream>
using namespace std;

double smallest( double, double, double );

int main()
{
   double a;
   double b;
   double c;
   cout << "Enter three numbers: ";
   cin >> a >> b >> c;

   cout << "The smallest number is " << smallest( a, b, c ) << endl;
}
double smallest( double x, double y, double z )
{
   if ( x< y && x < z )
      return x;
   else if ( y < x && y < z )
      return y;
   else
      return z;
}
