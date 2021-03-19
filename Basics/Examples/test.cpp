#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string given;
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i <= n - 1; ++i)
    {
        cin >> given;

        if (given.length() <= 10)
        {
            cout << given << endl;
        }
        else

        {
            cout << given.front() << given.length() - 2 << given.back() << endl;
        }
    }
}