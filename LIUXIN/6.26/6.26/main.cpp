#include <iostream>
#include <iomanip>
using namespace std;
int celsius( int );
int fahrenheit( int );
int main()
{
   cout << "�����¶��൱�������¶�:\n" << endl;
   for ( int t = 0; t < 4; t++ )
      cout << setw( 8 ) << "�����¶�" << setw( 12 ) << "�����¶�  ";
      cout << endl;
   for ( int i = 0; i < 25; i++ )
   {
      for ( int j = 0; j <= 75; j += 25 )
         cout << setw( 7 ) << i + j
              << setw( 11 ) << fahrenheit( i + j ) << ' ';
      cout << endl;
   }
cout << setw( 64 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;
   cout << "\n\n���϶��൱�ڻ����¶�:\n" << endl;
   for ( int t = 0; t < 4; t++ )
      cout << setw( 8 ) << "�����¶�" << setw( 12 ) << "�����¶�  ";
   cout << endl;
 for ( int i = 32; i < 77; i++ )
   {
      for ( int j = 0; j <= 135; j += 45 )
         cout << setw( 7 ) << i + j
              << setw( 11 ) << celsius( i + j ) << ' ';
      cout << endl;
   }
   cout << setw( 64 ) << 212 << setw( 12 ) << celsius( 212 ) << endl;
}
int celsius( int fTemperature )
{
   return ( 5.0/9.0 * (fTemperature - 32 ));
}
int fahrenheit( int cTemperature )
{
   return ( 9.0/5.0 *(cTemperature + 32 ));
}
