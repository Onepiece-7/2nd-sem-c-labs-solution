// WAP to create a single class with private data members and add then using friend function
#include <iostream>
using namespace std;
class class1
{
private:
    int a;
    int b;

public:
    void get_data()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    };
    friend void sum(class1 c);
};
void sum(class1 c)
{
    cout << "The Value of a is:" << (c.a + c.b) << endl;
}
int main()
{
    class1 c1;
    c1.get_data();
    sum(c1);
}
