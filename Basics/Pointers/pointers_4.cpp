#include <iostream>
using namespace std;
int main()
{
    int var = 5;
    int *pointvar;

    // store the address of var
    pointvar = &var;

    cout << "var = " << var << endl;

    cout << "*pointvar = " << *pointvar << endl;

    // Changing the value of var to 7
    var = 7;

    cout << "var = " << var << endl;

    cout << "*pointvar" << *pointvar << endl;

    cout << "changing value of *pointvar to 16: " << endl;

    *pointvar = 16;

    cout << "var = " << var << endl;

    cout << "*pointvar = " << *pointvar << endl;

    return 0;
}