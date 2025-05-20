
// Inside the class
#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    char name[100];
    char address[100];
    long int salary;
    char department[100];

public:
    void get_data()
    {
        cout << "Enter the detail of the employee:" << endl;
        cout << "Identification number: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Address: ";
        cin >> address;
        cout << "Salary: ";
        cin >> salary;
        cout << "Department";
        cin >> department;
    };
    void employee::display()
    {
        cout << "ID " << id;
        cout << "Name " << name;
        cout << "Address " << address;
        cout << "Salary " << salary;
        cout << "Department " << department;
    };
};

int main()
{
    employee e1;
    e1.get_data();
    e1.display();
}
