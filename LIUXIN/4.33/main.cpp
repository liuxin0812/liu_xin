#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int d[3];
    cin >> d[0] >> d[1] >> d[2];
    sort(d, d + 3);
    if(d[0]*d[0] + d[1]*d[1] ==d[2]*d[2])
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
