// Check Armstrong Number 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0, n = 0, power;
    cout << " Enter a integer: ";

    cin >> num;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;

    while (originalNum != 0)
    {

        remainder = originalNum % 10;

        power = round(pow(remainder, n));
        result += power;

        originalNum /= 10;
    }
    if (result == num)
        cout << num << " is an Armstrong number. ";
    else
        cout << num << "is not an Armstrong number. ";

    return 0;
}