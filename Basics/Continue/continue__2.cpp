// Program to calculate positive numbers till 50 only
// negative number --> loop terminate
// numbers above 50 --> skip iteration

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;

    while (number >= 0)
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;

        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            number = 0;
            continue;
        }
    }
    cout << "The sum is " << sum << endl;
    return 0;
}