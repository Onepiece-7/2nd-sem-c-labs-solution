// WAP to swap the contents of two variables of 2 different classes using friend function.
#include <iostream>
using namespace std;
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
    friend void swap(class1 m, class2 n);
    friend void display(class1 m, class2 n);
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
    friend void swap(class1 m, class2 n);
    friend void display(class1 m, class2 n);
};
void display(class1 m, class2 n)
{
    cout << "The value of a before swap:" << m.a << endl;
    cout << "The value of b before swap:" << n.b << endl;
}

void swap(class1 m, class2 n)
{
    int temp;
    temp = m.a;
    m.a = n.b;
    n.b = temp;
    cout << "The value of a after swap:" << m.a << endl;
    cout << "The value of b after swap:" << n.b << endl;
}
int main()
{
    class1 c1;
    class2 c2;

    c1.get_data();
    c2.get_data();

    display(c1, c2);

    swap(c1, c2);
}