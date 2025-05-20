// MOdify the question no 2 by 50 patients(implementing the concept of array)
#include <iostream>
using namespace std;
struct patient
{
    char Name[100];
    int age;
    char gender[100];
    char nature_of_illness[100];
    struct DOB date;
};
struct DOB
{
    int yy;
    int mm;
    int dd;
};
int main()
{
    patient p[50];
    int i;
    for (i = 0; i < 50; i++)
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
        cout << "Date of birth of the patient" << endl;
        cout << "year, month and day" << endl;
        cin >> p[i].date.yy >> p[i].date.mm >> p[i].date.dd;
    }

    for (i = 0; i < 50; i++)
    {
        cout << "the detail of " << (i) << "patient is: " << endl;
        cout << "Name: " << p[i].Name << endl;
        cout << "age: " << p[i].age << endl;
        cout << "gender: " << p[i].gender << endl;
        cout << "Nature_of_illness: " << p[i].nature_of_illness << endl;
        cout << "Date of birth: " << endl;
        cout << "Year" << p[i].date.yy;
        cout << "Month" << p[i].date.mm;
        cout << "Day" << p[i].date.dd;
    }
}