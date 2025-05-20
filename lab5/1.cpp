
// define a class to represent bowlers in a cricket team with data member name,
// overs, bowled, Runs given, wicket taken and use constructor to initialize value
// and use member function to display bowlers information
#include <iostream>
using namespace std;
class cricket
{
private:
    string name;
    int overs;
    int bowled;
    int runs;
    int wicket;

public:
    cricket(string a, int b, int c, int d, int e)
    {
        name = a;
        overs = b;
        bowled = c;
        runs = d;
        wicket = e;
    }
    void display()
    {
        cout << "The name of the name of the bowler is : " << name << endl;
        cout << "The total over played is : " << overs << endl;
        cout << "The number of ball thrown is : " << bowled << endl;
        cout << "The total runs made is : " << runs << endl;
        cout << "The wicket taken is : " << wicket << endl;
    }
};
int main()
{
    // cricket c1;
    string a;
    int b, c, d, e;
    cout << "Enter the name of the bowler: " << endl;
    cin >> a;
    cout << "Enter the number of over played : " << endl;
    cin >> b;
    cout << "Enter the number of ball thrown : " << endl;
    cin >> c;
    cout << "Enter the number of runs made by the opponent: " << endl;
    cin >> d;
    cout << "Enter the number of wicket taken : " << endl;
    cin >> e;
    cricket c1(a, b, c, d, e);
    c1.display();
}
