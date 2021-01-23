// Fn type Arguments passed but no return value

#include <iostream>
using namespace std;

void prime(int n);

int main()
{
    int num;
    cout << "Enter a positive integer to check: ";
    cin >> num;

    // Argument num is passed to the prime fn
    prime(num);
    return 0;
}

// no return value to calling fn

void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is not a prime number. ";
    }
    else
    {
        cout << n << " is a prime number.";
    }
}