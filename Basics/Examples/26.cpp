// Display prime numbers between two numbers 

#include <iostream>
using namespace std;

int main() {
    int low, high, i, temp ;
    bool isPrime = true;

    cout <<" Enter two numbers ";
    cin>>low>>high;

    if  (low > high){
        temp = low;
        low = high;
        high = temp;
    }
    
    cout<<" \nPrime numbers between "<<low <<" and "<< high << " are: "<<endl;

    while (low <high){
        isPrime = true;
        if (low == 0 || low==1)
        {
            isPrime = false;
        }
        else 
        {
            for (i=2; i <= low /2; ++i ){
                if (low % i ==0){
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
    cout<<low << " ";   
        ++low;
    }
    return 0;
}