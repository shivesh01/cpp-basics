#include <iostream>
using namespace std;

int main()
{
    int var = 5;

    // declare a pointer variable
    int *pointVar;

    // store the address of var
    pointVar = &var;

    cout << "var = " << var << endl;

    cout << "Address of var(&var) = " << &var << endl;

    cout << "pointVar = " << pointVar << endl;

    cout << "Content of the address pointed to by pointVar" << endl;

    return 0;
} 

// Here var and pointVar have same address, the value of var is also changed when *pointVar is changed.