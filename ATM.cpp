#include <bits/stdc++.h>
using namespace std;
class ATM
{
private:
    string Name2;
    long long accountnumber;
    char accounttype[15];
    // long long amountto = 0;
    long long totalsum = 0;

public:
    void setter()
    {
        cout << "Please enter your Name2" << endl;
        cin.ignore();
        getline(cin, Name2);
        cout << "Please enter your Account number" << endl;
        cin >> accountnumber;
        cout << "Please enter your Account accounttype" << endl;
        cin >> accounttype;
        cout << "Please enter your Balance" << endl;
        cin >> totalsum;
    }
    void detailshow()
    {
        cout << "Name:" << Name2 << endl;
        cout << "Account No:" << accountnumber << endl;
        cout << "Account accounttype:" << accounttype << endl;
        cout << "Balance:" << totalsum << endl;
    }

    void deposit()
    {
        int a;
        cout << "Enter amountto to be deposit money :" << endl;
        cin >> a;
        totalsum = totalsum + a;
    }
    void withdrawlofmoney()
    {
        int a;
        cout << "Enter the amount to withdraw" << endl;
        cin >> a;
        if (a > totalsum)
        {
            cout << "Withdraw is not possible" << endl;
        }
        else
        {
            totalsum -= a;
        }
    }
};
int main()
{
    ATM bn;
    int choice;
    while (true)
    {
        cout << "Enter Your Choice" << endl;
        cout << "1. Enter Name2, Account "
             << "number, Account accounttype" << endl;
        cout << "\t2. Balance Enquiry" << endl;
        cout << "\t3. deposit Money" << endl;
        cout << "\t4. Withdraw Money" << endl;
        cout << "\t5. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            bn.setter();
            break;
        case 2:
            bn.detailshow();
            break;
        case 3:
            bn.deposit();
            break;
        case 4:
            bn.withdrawlofmoney();
            break;
        case 5:
            exit(true);
            break;
        default:
            cout << "Please enter the choice from 1 to 5" << endl;
        }
    }
}