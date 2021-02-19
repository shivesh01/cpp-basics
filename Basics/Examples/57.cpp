//  Copy String Object
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s1, s2;

//     cout<< "Enter string s1: ";
//     getline(cin, s1);

//     s2 = s1;

//     cout<<"s1 = "<< s1<<endl;
//     cout<<"s2 = "<< s2<<endl;

//     return 0;
// }


// Copy C-Strings
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char s1[100], s2[100];

    cout<< "Enter string s1: ";
    cin.getline(s1, 100);

    strcpy(s2, s1);

    cout<< "s1 = "<<s1<<endl;
    cout<< "s2 = "<<s2;
}