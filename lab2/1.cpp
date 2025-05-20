
// 1.WAP to create a structure in c++ named HOspital giving details abouts the patient admitted. Details are:
// patient name
// age
// gender
// nature of illness
#include <iostream>
using namespace std;
struct patient
{
    char Name[100];
    int age;
    char gender[100];
    char nature_of_illness[100];
};
int main()
{
    patient p[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        cout << "Enter the details of " << i << " patient" << endl;
        cout << "Name: ";
        cin.get(p[i].Name, 100);
        cout << "Age";
        cin >> p[i].age;
        cout << "Gender";
        cin.get(p[i].gender, 50);
        cout << "Nature of illness";
        cin.get(p[i].nature_of_illness, 50);
    }

    for (i = 0; i < 2; i++)
    {
        cout << "the detail of " << (i) << "patient is: " << endl;
        cout << "Name: " << p[i].Name << endl;
        cout << "age: " << p[i].age << endl;
        cout << "gender: " << p[i].gender << endl;
        cout << "Nature_of_illness: " << p[i].nature_of_illness << endl;
    }
}
