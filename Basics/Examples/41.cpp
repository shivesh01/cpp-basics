// Reverse a sentence using recursion

#include <iostream>
using namespace std;

// function protype
void reverse(const string &a);

int main()
{
    string str;

    cout << " Please enter a string " << endl;
    // reads the space character of the code, and whole line
    getline(cin, str);

    reverse(str);

    return 0;
}

void reverse(const string &str)
{
    size_t numOfChars = str.size();

    if (numOfChars == 1)
    {
        cout << str << endl;
    }
    else
    {
        cout << str[numOfChars - 1];

        // function recursion
        reverse(str.substr(0, numOfChars - 1));
    }
}
