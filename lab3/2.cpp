// WAP to find sum of complex by passing and returning object as an argument
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    void get_data();
    complex sum_data(complex c1, complex c2);
    void display();
};
void complex::get_data()
{
    cout << "real" << endl;
    cin >> real;
    cout << "imaginary" << endl;
    cin >> imag;
};
complex complex::sum_data(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
};
void complex::display()
{
    cout << "The sum of two complex number is :" << endl;
    cout << real << imag << endl;
};
int main()
{
    complex c1, c2, c3, result;
    cout << "Enter the data of first complex number:" << endl;
    c1.get_data();
    cout << "Enter the data of second complex number:" << endl;
    c2.get_data();
    result = c3.sum_data(c1, c2);
    cout << "The sum of two complex number is :" << endl;
    result.display();
}
