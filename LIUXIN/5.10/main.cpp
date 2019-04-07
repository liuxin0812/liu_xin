#include <iostream>

using namespace std;

int main()
{
    int n=1,number=1;


    for(;n<6;n++)
    {
      for(;n>0;n--)
      {
          number=number*n;
      }


      cout<<n<<"   "<<number<<endl;
    }


}
