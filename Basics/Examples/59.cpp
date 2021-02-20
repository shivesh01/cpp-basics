// Store and Display Information
#include <iostream>
using namespace std;

// Declaring a structure(like a class, and holds variables of different data types)

struct student
{
    char name[50];  // 1 byte
    int roll;      // 4bytes
    float marks;   // 4 bytes
};

int main()
{
    student s;          // student = s
    cout << "Enter information"<<endl;
    cout<< "Enter name: ";
    cin>>s.name;
    cout<< "Enter roll number: ";
    cin>>s.roll;
    cout<< "Enter marks: ";
    cin>>s.marks;

    cout<<"\nDisplaying Information,"<<endl;
    
    // Accessing elements of structure using " . " operator
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Marks: "<<s.marks <<endl;

    return 0;
    //not necessary, it's ok to use in every program.

}