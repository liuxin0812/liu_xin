#include <iostream>

using namespace std;

class Account
{
private:
    int rest;
public:
    Account (int x)
    {
        if (x<0)
        {
            rest=0;
            cout<<"Initial balance is invalid!";
        }
        else
            rest=x;
    }
    int credit(int a)
    {
        rest=rest+a;
        return rest;
    }
    int debit (int b)
    {
        if(b>rest)
            cout<<"Debit amount exceeded accout banlance";
        else
            rest=rest-b;
        return rest;
    }
    void getBalance()
    {
        cout<<"Your balance is:"<<rest<<endl;
    }

};
int main()
{
    Account account1(1);
    account1.getBalance();
    cout<<"Please enter the balance you want to deposit£º\n";
    int a;
    cin>>a;
    account1.credit(a);
    account1.getBalance();
    cout<<"Please enter the amount you want to get£º\n";
    int b;
    cin>>b;
    account1.debit(b);
    account1.getBalance();

    Account account2(10);
    account2.getBalance();
    cout<<"Please enter the balance you want to deposit:\n";
    int c;
    cin>>c;
    account2.credit(c);
    account2.getBalance();
    cout<<"Please enter the amount you want to get:\n";
    int d;
    cin>>d;
    account2.debit(d);
    account2.getBalance();

}
