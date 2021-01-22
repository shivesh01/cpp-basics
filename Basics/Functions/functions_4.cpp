// Program to add two numbers using a function

#include <iostream>

using namespace std;

int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int sum;
    sum = add(100, 99);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}