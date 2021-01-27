// Take input string and print it.
#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"You entered: "<< str<<endl;

    cout<<"\nEnter another string: ";
    cin>>str;
    cout<< "you entered: "<<str<<endl;

    return 0;
}

// scanf() in C and considers a space " " has a terminating character.