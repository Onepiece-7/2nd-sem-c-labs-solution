// WAP to find sum of two complex number , functiom call by object passing second object as functon argument
// and return third object adding two object(hint:c3=c1.addcomplex(c2))
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    void get_data();
    complex addcomplex(complex c2);
    void display();
};
void complex::get_data()
{
    cout << " Enter the complex number" << endl;
    cin >> real >> imag;
};
complex complex::addcomplex(complex c2)
{
    complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
};
void complex::display()
{
    cout << real << "+" << imag << "i" << endl;
};
int main()
{
    complex c1, c2, c3;
    cout << "for first complex number" << endl;
    c1.get_data();
    cout << "for second complex number" << endl;
    c2.get_data();
    c3 = c1.addcomplex(c2);
    cout << "sum of two complex number=" << endl;
    c3.display();
}
