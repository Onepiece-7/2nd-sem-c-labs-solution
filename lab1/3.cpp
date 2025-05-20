// WAP to take radius of a circle and calculate its area

#include <iostream>
using namespace std;
int main()
{
    int r, area;
    cout << "Enter the radius of the circle:";
    cin >> r;
    area = 3.14 * r * r;
    cout << " The area of the circle is:" << area;
}