#include <iostream>

using namespace std;
int counter=1;
int largest=0;
int main()
{
    while (counter<=10)
        {
            cout << "please enter the number of:";
            int number=0;
            cin >> number;
            if (number>largest)
                largest=number;
                counter++;


        }
        cout <<"The largest number is £º"<<largest<<endl;
}
