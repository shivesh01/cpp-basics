// Function prototype
// Declaring a function after function call

#include <iostream>
using namespace std;

void add(int, int);

int main()
{
    add(5, 3);
    return 0;
}

void add(int a, int b)
{
    cout << (a + b);
}