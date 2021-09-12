#include <iostream>
#include <bitset>
using namespace std;
#define fast                               \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
#define endl "\n"
//debuging tools
#define space std::cout << endl \
                        << "----------------------------" << endl;
#define deb(x) std::cout << #x << " " << x << endl;
//Case
#define ans(i, x) std::cout << "Case #" << i << ": " << x << endl;

void fun(int x, int y)
{
    cout << bitset<8>(x);
    space;
    cout << bitset<8>(y);
    space;
    cout << "(Always put in the bracket )" << bitset<8>(x ^ y);
}

int main()
{
    fast;
    //---------------------------------------------------
    freopen("input.txt", "r", stdin); // I/O Block // Remove
    // freopen("output.txt", "w", stdout);
    //---------------------------------------------------
    int test = 1; // while Block
    while (test)
    //---------------------------------------------------
    {
        int x;
        int y;
        cin >> x;
        cin >> y;

        fun(x, y);
        //-----------------------------------------------
        test--; // while Block
        //-----------------------------------------------
    }

    return 0;
}

