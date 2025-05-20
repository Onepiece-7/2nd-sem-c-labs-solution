// ii.addition of length with data member inch and feet
#include <iostream>
using namespace std;
class hight
{
private:
    int feet;
    int inch;

public:
    void gethight();
    void display();
    hight addhight(hight t1, hight t2);
};
void hight::gethight()
{
    cout << "Enter the hight in feet:" << endl;
    cin >> feet;
    cout << "Enter the hight in inch:" << endl;
    cin >> inch;
};
void hight::display()
{
    cout << feet << " " << inch << endl;
};
hight hight::addhight(hight h1, hight h2)
{
    hight temp;
    int rem1;
    rem1 = (h1.inch + h2.inch) / 12;
    temp.feet = h1.feet + h2.feet + rem1;
    if (h1.inch + h2.inch + rem1 >= 12)
    {
        temp.inch = h1.inch + h2.inch - 12;
    }
    else
    {
        temp.inch = h1.inch + h2.inch;
    }
    return temp;
};
int main()
{
    hight h1, h2, h3, result;
    h1.gethight();
    h2.gethight();
    result = h3.addhight(h1, h2);
    cout << "the sum of two hight period is:" << endl;
    result.display();
}