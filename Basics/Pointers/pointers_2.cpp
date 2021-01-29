// Pointer
#include <iostream>
using namespace std;
int main()
{

    int *pointVar, var;
    var = 5;
    pointVar = &var;

    cout << "pointer: " << *pointVar << endl;
}

// Note: In C++, pointVar and *pointVar is completely different. We cannot do something like *pointVar = &var;
