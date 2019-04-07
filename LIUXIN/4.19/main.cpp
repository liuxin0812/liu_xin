#include <iostream>

using namespace std;
int counter=1;
int largest1=0;
int largest2=0;
int main()
{
    while (counter<=10)
        {
            cout << "please enter the number of:";
            int number=0;
            cin >> number;

            if (number>largest1)
                {
                    largest2=largest1;
                    largest1=number;

                }
                else if (number >largest2)
                    largest2=number;
                counter++;


        }
        cout <<"The first largest number is £º"<<largest1<<"\nThe second largest number is:"<< largest2<<endl;
}
