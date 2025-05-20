// WAP to add complex numbers of two different classes using friend class.
#include <iostream>
using namespace std;
class complex2;
class complex1
{
private:
    int real1;
    int imag1;

public:
    void get_data()
    {
        cout << "Enter the value first complex number" << endl;
        cout << "Enter the real part of complex number:" << endl;
        cin >> real1;
        cout << "Enter the imaginary part of complex number:" << endl;
        cin >> imag1;
    }
    friend class complex2;
};
class complex2
{
private:
    int real2;
    int imag2;

public:
    void display();
    void get_data()
    {
        cout << "Enter the value first complex number" << endl;
        cout << "Enter the real part of complex number:" << endl;
        cin >> real2;
        cout << "Enter the imaginary part of complex number:" << endl;
        cin >> imag2;
    }
    complex2 sum(complex1 t)
    {
        complex2 temp;
        temp.real2 = t.real1 + real2;
        temp.imag2 = t.imag1 + imag2;
        return temp;
    }
};
void complex2::display()
{
    cout << "The sum of complex number is:\n " << real2 << " + " << imag2 << "i" << endl;
}
int main()
{
    complex1 c1;
    complex2 c2, result;

    c1.get_data();
    c2.get_data();
    c2.sum(c1);
    result.display();
}
