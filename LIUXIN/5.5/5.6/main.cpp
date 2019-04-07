#include <iostream>

using namespace std;

int main()
{
    int a , b=0 ,c=0 ;
    for (int i= 1;i<=9999; i = i+1)
    {
        cin >> a;

        if(a!=9999)
        {
            c=c+a;
        }
        else {
            if(a==9999)
                break;
        }

        b=c/i;

    }
        cout << "平均值是"<< b<<endl;
        return 0;
}
