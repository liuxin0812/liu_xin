#include <iostream>
using namespace std;

int qualityPoints( int );

int main()
{
   int average;

   for ( int a = 1; a <= 5; a++ )
   {
      cout << "\nEnter the student's average: ";
      cin >> average;
      cout << average <<"change: "
         << qualityPoints( average ) << endl;
   }

   cout << endl;
}
int qualityPoints( int average )
{
   if ( average >= 90 )
      return 4;
   else if ( average >= 80 )
      return 3;
   else if ( average >= 70 )
      return 2;
   else if ( average >= 60 )
      return 1;
   else
      return 0;
}
