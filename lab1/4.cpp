// WAP to input length and breadth of a room and calculate
// the area and perimeter an print it

#include <iostream>
using namespace std;
int main()
{
    float l, b, area, perimeter;
    cout << "Enter the lendth and breadth of the recatngle :";
    cin >> l >> b;
    area = l * b;
    perimeter = 2 * (l + b);
    cout << "The area of the rectangle is:" << area << endl;
    cout << "The perimeter of the rectangle is:" << perimeter;
}