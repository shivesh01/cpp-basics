// Overloading using different number of arguments

#include <iostream>
using namespace std;

void display(int var1, double var2)
{
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

void display(double var)
{
    cout << "Double number: " << var << endl;
}

void display(int var)
{
    cout << "Integer number: " << var << endl;
}

int main()
{
    int a = 5;
    double b = 5.5;

    display(a);

    display(b);

    display(a, b);

    return 0;
}

// Note:  In C++, many standard library functions are overloaded. For example, the sqrt() function can take double, float, int, etc. as parameters. This is possible because the sqrt() function is overloaded in C++.