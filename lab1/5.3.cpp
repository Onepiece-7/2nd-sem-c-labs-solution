// WAP to calculate simple interest amount for deposite amount lept in bank for n year
// at rate r simple interest per annum by implementing following categories
// function without argument and return value
#include <iostream>
using namespace std;
float si();
int main()
{
    float output;
    output = si();
    cout << "The interest of the deposite is:" << output;
}
float si()
{
    int p, t, r, interest;
    cout << "Enter the principle, time and rate simultaneously";
    cin >> p >> t >> r;
    interest = (p * t * r) / 100;
    return interest;
}