#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0,s=1;

    cout<<"enter ";
    cin>>n;

    while(n>=1)
    {

        s=s*n;
        n--;

    }

    cout<<"result "<<s<<endl;
}
