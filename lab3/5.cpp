// Create a new class named city that will have two member variale city name (char [20] ), and
// distformKTM(float addmember function to set nd retruve the cityname and distanceformktm) separately and
//  add new member finction add distanc that take two arguments of class ity and retutns the sum of distformktm
//  of two argument. In the mainfuction, initialize three city objects . Set the first and second city to bw pokhara and dhangadi
// display the sum of distform ktm of pokhara and dhangadi all adddistance fuction of thirs city object

#include <iostream>
using namespace std;
class city
{
private:
    string city_name;
    float distanceFK;

public:
    void set();
    void retrive_name();
    void retrive_distance();
    city sum_distance(city c1, city c2);
    void display();
};
void city::set()
{
    cout << "Enter the name of the city:" << endl;
    cin >> city_name;
    cout << "Enter the distance from the kathmandu:" << endl;
    cin >> distanceFK;
};
void city::retrive_name()
{
    cout << city_name;
};
void city::retrive_distance()
{
    cout << distanceFK;
};
city city::sum_distance(city c1, city c2)
{
    city temp;
    temp.distanceFK = c1.distanceFK + c2.distanceFK;
    return temp;
};
void city::display()
{
    cout << distanceFK;
};
int main()
{
    city c1, c2, c3, result;
    cout << "Enter the detail of first city:" << endl;
    c1.set();
    cout << "Enter the detail of second city:" << endl;
    c2.set();
    cout << "Name of the city:" << endl;
    c3.retrive_name();
    cout << "Distance from the city:" << endl;
    c3.retrive_distance();
    cout << "The sum of distance : " << endl;
    result.display();
}
