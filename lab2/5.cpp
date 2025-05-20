// Define a class named "bank account " to represent following members
//  data members:
// account number
//  name of depositor
// acount type
// balance amount
// member function:
// initialize member
// depsoite amount
// Withdrawn amount
// display
#include <iostream>
using namespace std;
class Bank_account
{
private:
    int acount_number;
    char depositor[100];
    char type[100];
    int balance;

public:
    void get_data()
    {
        cout << "Enter the detail of depositor:" << endl;
        cout << "account number: ";
        cin >> acount_number;
        cout << "Name of depositor: ";
        cin >> depositor;
        cout << "Account type: ";
        cin >> type;
        cout << "Balance amount: ";
        cin >> balance;
    };
    void deposite()
    {
        int depo;
        cout << "Amount to deposite: ";
        cin >> depo;
        balance = balance + depo;
    };
    void withdraw()
    {
        int with;
        cout << "Amount to withdraw";
        cin >> with;
        balance = balance - with;
    };
    void display_balance()
    {
        cout << "balance in the account is: " << balance << endl;
    };
};
int main()
{
    Bank_account b1;
    char choice[100];
    b1.get_data();
    cout << "Make your choise to withdrawl or deposite: " << endl;
    cin >> choice;
    if (choice == "withdrawl")
    {
        b1.withdraw();
    }
    else
    {
        b1.deposite();
    }
    b1.display_balance();
}
