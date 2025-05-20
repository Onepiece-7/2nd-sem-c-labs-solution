// Write a program to find the largest of four integers. your program should have three
// classes and each classes have one integer number.
#include <iostream>
using namespace std;
class class3;
class class2;
class class1
{
private:
    int a;

public:
    void get_data()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
    }
    friend void largest(class1 m, class2 n, class3 o, int d);
};
class class2
{
private:
    int b;

public:
    void get_data()
    {
        cout << "Enter the value of a : " << endl;
        cin >> b;
    }
    friend void largest(class1 m, class2 n, class3 o, int d);
};

class class3
{
private:
    int c;

public:
    void get_data()
    {
        cout << "Enter the value of a : " << endl;
        cin >> c;
    }
    friend void largest(class1 m, class2 n, class3 o, int d);
};
void largest(class1 m, class2 n, class3 o, int d)
{
    if (m.a > n.b && m.a > o.c && m.a > d)
    {

        cout << m.a << "is grestest number among four integer" << endl;
    }
    else if (n.b > o.c && n.b > d)
    {
        cout << n.b << "is the greatest number among four integer" << endl;
    }
    else if (o.c > d)
    {
        cout << o.c << " is the greates number among four integer" << endl;
    }
    else
    {
        cout << d << " is the greatest number among four integer" << endl;
    }
}
int main()
{
    class1 c1;
    class2 c2;
    class3 c3;
    int d;
    cout << "Enter the value of d:" << endl;
    cin >> d;

    c1.get_data();
    c2.get_data();
    c3.get_data();

    largest(c1, c2, c3, d);
    return 0;
}
