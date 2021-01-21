// program to priny the value of i with continue statement

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

// Note : The continue statement is almost always used with decision - making statements.
//Note : The break statement terminates the loop entirely.However, the continue statement only skips the current iteration.