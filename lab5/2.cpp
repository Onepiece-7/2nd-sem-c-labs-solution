// Create c class called employee with data member code, name, address, salary.
// Create c constructor to initialize the member of the class. Also create the
// another constructor so that we can create an object from another object. Define member
// function display() to display the information of the class.
#include <iostream>
using namespace std;
class employee
{
private:
    int code;
    string name;
    string address;
    float salary;

public:
    employee(int c, string n, string a, float s) // parameterized constructor
    {
        code = c;
        name = n;
        address = a;
        salary = s;
    }
    employee(employee &e) // copy constructor
    {
        code = e.code;
        name = e.name;
        address = e.address;
        salary = e.salary;
    }
    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    int code;
    string name, address;
    float salary;
    cout << "Enter the name of the employee:" << endl;
    cin >> name;
    cout << "Enter the specific code of the employee:" << endl;
    cin >> code;
    cout << "Where does this employee lives: " << endl;
    cin >> address;
    cout << "How much does this employee earn: " << endl;
    cin >> salary;
    employee e1(code, name, address, salary);
    employee e2(e1);
    e1.display();
    cout << endl;
    e2.display();
    return 0; // creating object using copy constructor
}
