//  WAP to add private data of three different classes using friend function.
#include <iostream>
using namespace std;
class class2;
class class3;
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
    friend void sum(class1 m, class2 n, class3 o);
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
    friend void sum(class1 m, class2 n, class3 o);
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
    friend void sum(class1 m, class2 n, class3 o);
};
void sum(class1 m, class2 n, class3 o)
{
    int r;
    r = m.a + n.b + o.c;
    cout << "The sum of three variale from three different class is :" << sum << endl;
}
int main()
{
    class1 c1;
    class2 c2;
    class3 c3;

    c1.get_data();
    c2.get_data();
    c3.get_data();

    sum(c1, c2, c3);
    return 0;
}
