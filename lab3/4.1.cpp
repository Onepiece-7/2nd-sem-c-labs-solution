// perform similar operation in above questin
// i. addition of time with data member hour minute and second
#include <iostream>
using namespace std;
class time
{
private:
    int hour;
    int minute;
    int second;

public:
    void gettime();
    void display();
    time addtime(time t1, time t2);
};
void time::gettime()
{
    cout << "Enter the time in hour:" << endl;
    cin >> hour;
    cout << "Enter the time in minute:" << endl;
    cin >> minute;
    cout << "Enter the time in second:" << endl;
    cin >> second;
};
void time::display()
{
    cout << hour << " " << minute << " " << second << endl;
};
time time::addtime(time t1, time t2)
{
    time temp;
    int rem1, rem2;
    rem1 = (t1.second + t2.second) / 60;
    rem2 = (t1.minute + t2.minute + rem1) / 60;
    temp.hour = t1.hour + t2.hour + rem2;
    {
        if (t1.minute + t2.minute + rem1 <= 60)
        {
            temp.minute = t1.minute + t2.minute + rem1;
        }
        else
        {
            temp.minute = t1.minute + t2.minute + rem1 - 60;
        }
    }
    {
        if (t1.second + t2.second <= 60)
        {
            temp.second = t1.second + t2.second;
        }
        else
        {
            temp.second = t1.second + t2.second - 60;
        }
    }
    return temp;
};
int main()
{
    time t1, t2, t3, result;
    t1.gettime();
    t2.gettime();
    result = t3.addtime(t1, t2);
    cout << "the sum of two time period is:" << endl;
    result.display();
}