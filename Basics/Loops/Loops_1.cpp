// If statement

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer:";
    cin >> number;

    if (number > 0)
    {
        cout << "You have entered a positive integer: " << number << endl;
    }

    cout << "This statement is always executed.";
    return 0;
}