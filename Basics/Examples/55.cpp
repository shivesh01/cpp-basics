// Program to find the Length of a string

// #include <iostream>
// using namespace std;

// int main(){
//     string text;

//     cout<<"Enter your text: "<<endl;
//     getline(cin,text);

// // You can also use str.size
//     cout <<"\nYour text length is: "<<text.length()<<endl;

//     return 0;
// }



// Using C-style string 
#include <iostream>
#include<cstring>
using namespace std;

int main(){

    char str[] = "C++ programming is awesome";

    cout<<"String length = "<<strlen(str);

    return 0;
}


