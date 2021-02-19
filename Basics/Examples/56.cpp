// Program to Concatenate Two Strings

// #include <iostream>
// using namespace std;

// int main(){
// string s1, s2, result;

// cout<<"Enter string s1: "<<endl;
// getline(cin, s1);

// cout<<"Enter string s2: "<<endl;
// getline(cin, s2);

// result = s1 + s2;

// cout<<"Concatenated string: "<<result;

// return 0;

// }

// On most operating systems returning 0 is a success status like saying "The program worked fine".In C++ it is optional to type " return 0; " at the end of the main function and the compiler includes it automatically.

// 2nd method: using C-style Strings
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char s1[50], s2[50];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

    strcat(s1, s2);

    cout << "result = " << strcat(s1, s2);
    return 0;
}
