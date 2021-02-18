// Find frequency of characters of a string object
// #include <iostream>
// using namespace std;

// int main(){
//     string str = "C++ Programming is awesome";
//     char checkCharacter = 'a';
//     int count = 0;

//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == checkCharacter)
//         {
//             ++ count;

//         }
//     }
//     cout<<"Number of "<<checkCharacter<<" = "<< count;

//     return 0;
// }


// 2nd method using c style string
#include<iostream>

using namespace std;
int main()
{
    char c[] = "C++ programming is not easy. ", check = 'm';
    int count = 0;

    for(int i = 0; c[i] != '\0'; ++i)
    {
        if(check == c[i])
        ++count;
    }
    cout<<"Frequency of "<<check<<" = "<<count;
    return 0;
}
