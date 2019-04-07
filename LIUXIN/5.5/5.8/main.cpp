#include <iostream>

using namespace std;

int main()
{
     int a,b;
    int R;

    cin >> a;

    for (int i=1; i<=a; i+=1)
    {
        cin>> b;
        if(i==1)
        {
            R=b;
        }
        else
        {
            if(R > b)
                R=b;
        }


    }
    cout << R<<endl;
    return 0;

}
