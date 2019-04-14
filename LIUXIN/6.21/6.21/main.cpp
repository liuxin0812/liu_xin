#include <iostream>

#include <cmath>

using namespace std;

bool iseven( int );

int main()
{
      int x;
      cout << "Enter an integer number : ";
      cin >> x;

      cout << boolalpha << iseven(x) << endl;
       if(iseven(x))
        cout << "ture\n";
      else
        cout << "false\n";



}
bool iseven( int a )
{
   if(a % 2 ==0)
      return true;
   else
      return false;
}

