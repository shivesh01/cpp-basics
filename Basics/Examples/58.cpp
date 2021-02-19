// Sort Words in Dictionary order
#include <iostream>
using namespace std;

int main()
{
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    // Taking input from users
    for (int i = 0; i < 10; ++i)
    {
        getline(cin, str[i]);
    }

    // Use Bubble sort to arrange words
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9 - i; ++j)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];

                str[j] = str[j + 1];
                str[j + i] = temp;
            }
        }
    }

    cout << "\n In lexicographical order: " << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << str[i] << endl;
    }

    return 0;
}