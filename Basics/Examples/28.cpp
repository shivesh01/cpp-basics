// Display factors of a number

#include <iostream>
using namespace std;

int main()
{

    int n, i;

    cout << "Enter a number " << endl;
    cin >> n;
    cout << "Factors are " << n << " are: " << endl;

    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)

            cout << i << endl;
    }
    return 0;
}