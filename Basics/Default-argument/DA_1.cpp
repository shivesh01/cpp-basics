// Function definition instead of the function prototype, then the function must be defined before the function call

#include <iostream>
using namespace std;

void display(char = '*', int = 3);

int main()
{
    int count = 5;

    cout << "No argument passed: ";
    display();

    cout << "First argument passed: ";
    display('#');

    cout << "Both arguments passes: ";
    display('$', count);

    return 0;
}

void display(char c, int count)
{
    for (int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}