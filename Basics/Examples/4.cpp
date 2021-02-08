// Find Qoutient and Remainder

#include <iostream>
using namespace std;

int main(){
    int divisor, divdend, quotient, remainder;

    cout<<"Enter dividend: ";
    cin>>divdend;

    cout<<"Enter divisor: ";
    cin>>divisor;

    quotient = divdend / divisor;
    remainder = divdend % divisor;

    cout<<"Quotient = "<<quotient<<endl;
    cout<<"Remainder = "<<remainder;

    return 0;



}