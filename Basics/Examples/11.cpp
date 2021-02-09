// calculate the sum of numbers

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter positive numbers";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}