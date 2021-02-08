// swap two numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    cout << "Before swapping " << endl;
    cout << " a and b are : " << a <<" "<< b << endl;

    int temp;
    temp = a;
    a=b;
    b=temp;

    cout << "After swapping " << endl;
    cout<< "a and  b are : "<<a<<" "<<b<<endl;
    return 0;
    }