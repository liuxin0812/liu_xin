#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
   Complex a( 1, 5 ), b( 2, 6 ), c;

   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();

   cout << '\n';
   a.setComplexNumber( 6, 5 );
   b.setComplexNumber( 1, 2 );
   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
}

