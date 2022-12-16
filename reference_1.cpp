#include <iostream>
using namespace std;
int main()
{
    // --------------- REFERENCE VARIABLES ---------------
    /*
    When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration.
    */
    int a = 10;
    int &b = a; // a and b refer to the same memory location.
    ++b; // incrementing value of b.
    cout << a << endl;
    return 0;
}