#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

class Bank
{
private:
    string name;
    long Accnumber;
    char type[10];
    int amount = 0;
    int total = 0;

public:
    //Function to set customer's data.
    void setData()
    {
        cout << endl << "Enter Name" << endl;
        getline(cin, name);             //To use space in String

        cout << "Enter Account Number" << endl;
        cin >> Accnumber;
        cout << "Enter Account type" << endl;
        cin >> type;
        cout << "Enter Balance" << endl;
        cin >> total;
    }

    //Function to display data
    void showData()
    {
        cout << endl << "Name: " << name << endl;
        cout << "Account No: " << Accnumber << endl;
        cout << "Account type: " << type << endl;
        cout << "Balance: " << total << endl;
    }
        //Function to Deposit the amount in the Bank
    void Deposit()
    {
        cout <<endl<< "Enter Amount to be Deposited" << endl;
        cin >> amount;
    }

        //Function to show balance amount
    void showBalance()
    {
        total = total + amount;
        cout << endl
             << "Total Balance is: " << total;
    }
    //Funtion to Withdraw money
    void Withdrawl()
    {
        int a, avail_balance;
        cout <<endl<< "Enter amount to Withdraw" << endl;
        cin >> a;
        avail_balance = total - a;
        cout <<endl<< "Available Balance is: " << avail_balance;
    }
};
//Driver Code
int main()
{
    //Object Creation
    Bank Customer;
    //Infinite While loop for menu
    do
    { 
        cout << endl
             << "\t*****************Welcome******************" << endl
             << endl;
        cout << "\t1. Enter Name, Account Number, Account Type, and Current Balance" << endl;
        cout << "\t2. Customer Details" << endl;
        cout << "\t3. Deposit Money" << endl;
        cout << "\t4. Show total balance" << endl;
        cout << "\t5. Withdraw Money" << endl;
        cout << "\t6. Exit" << endl;
        cout << endl
             << "Enter your Choice" << endl;
        char op = getche(); // Asks which operation the user would like to do
        if (op == '1')
        {
            Customer.setData();
        }
        else if (op == '2')
        {
            Customer.showData();
        }
        else if (op == '3')
        {
            Customer.Deposit();
        }
        else if (op == '4')
        {
            Customer.showBalance();
        }
        else if (op == '5')
        {
            Customer.Withdrawl();
        }
        else if (op == '6')
        {
            exit(0);
        }
    } while (1);

    return 0;
}