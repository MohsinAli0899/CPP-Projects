#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank
{
private:
    string name;
    int Accnumber;
    char type[10];
    int amount = 0;
    int total = 0;

public:
    void setData()
    {
        cout << "Enter Name" << endl;
        cin.ignore();

        getline(cin, name);

        cout << "Enter Account Number" << endl;
        cin >> Accnumber;
        cout << "Enter Account type" << endl;
        cin >> type;
        cout << "Enter Balance" << endl;
        cin >> total;
    }
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Account No: " << Accnumber << endl;
        cout << "Account type: " << type << endl;
        cout << "Balance: " << total << endl;
    }

    void Deposit()
    {
        cout << "Enter Amount to be Deposited" << endl;
        cin >> amount;
    }
    void showBalance()
    {
        total = total + amount;
        cout << endl
             << "Total Current Balance is: " << total;
    }

    void Withdrawl()
    {
        int a, avail_balance;
        cout << "Enter amount to Withdraw" << endl;
        cin >> a;
        avail_balance = total - a;
        cout << "Available Balance is: " << avail_balance;
    }
};


int main()
{
    return 0;
}