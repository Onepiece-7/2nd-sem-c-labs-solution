// WAP to calculate simple interest amount for deposite amount lept in bank for n year
// at rate r simple interest per annum by implementing following categories
// function with argument and return value
#include <iostream>
using namespace std;
float si(float p, float t, float r);
int main()
{
    int p, t, r, output;
    cout << "Enter the principle, time and rate simultaneously";
    cin >> p >> t >> r;
    output = si(p, t, r);
    cout << "The interest of the deposite is :" << output;
}
float si(float p, float t, float r)
{
    float interest;
    interest = (p * t * r) / 100;
    return interest;
}