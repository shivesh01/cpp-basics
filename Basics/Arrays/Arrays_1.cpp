// Displaying array elements

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {19, 10, 8, 17, 9};

    cout << "The number are: ";

    for (const int &n : numbers)
    {
        cout << n << " ";
    }

    cout << " \nThe numbers are: ";

    for (int i = 0; i < 5; ++i)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
