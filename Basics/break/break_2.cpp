// sum of positive numbers and negative number will end the loop with break statement

#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0)
        {
            break;
        }
        sum += number;
    }
    cout << "The sum is " << sum << endl;

    return 0;
}