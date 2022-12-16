#include <iostream>
using namespace std;
// --------------- FUNCTIONS ---------------
int pow(int a, int b)
{ // return type is int
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans; // returns an integer value.
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers :" << endl;
    cin >> a >> b;
    cout << pow(a, b) << endl; // print a^b
    int c, d;
    cout << "Enter 2 numbers :" << endl;
    cin >> c >> d;
    cout << pow(c, d) << endl; // prints c^d
    int e, f;
    cout << "Enter 2 numbers :" << endl;
    cin >> e >> f;
    cout << pow(e, f) << endl; // print e^f
    return 0;
}