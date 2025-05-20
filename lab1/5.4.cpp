// WAP to calculate simple interest amount for deposite amount lept in bank for n year
// at rate r simple interest per annum by implementing following categories
// function without argument and no return value
#include <iostream>
using namespace std;
float si();
int main()
{
    si();
}
float si()
{
    int p, t, r, interest;
    cout << "Enter the principle, time and rate simultaneously";
    cin >> p >> t >> r;
    interest = (p * t * r) / 100;
    cout << "The simple interest of the deposite is :" << interest;
    return 0;
}