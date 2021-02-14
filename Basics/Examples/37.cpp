// Binary to Decimal and Decimal to Binary Conversion
#include <iostream>
#include <cmath>

using namespace std;

// int convertBinarytoDecimal( long long );

// int main()
// {
//     long long n;

//     cout<<"Enter a binary number: ";
//     cin>>n;

//     cout<<n<<" in binary = "<<convertBinarytoDecimal(n)<<"in decimal";

//     return 0;


// }

// int convertBinarytoDecimal(long long n )
// {
//     int decimalNumber = 0, i = 0, remainder;
//     while (n !=0){
//         remainder = n%10;
//         n /= 10;
//         decimalNumber += remainder*pow(2, i);
//         ++i;


//     }
//     return decimalNumber; 
// }

// reverse conversion

long long convertDecimalToBinary(int);

int main()
{
    int n , binaryNumber ;

    cout<< " Enter a decimal: ";
    cin>>n;
    binaryNumber = convertDecimalToBinary(n);
    cout<< n<<" in decimal = "<<binaryNumber <<" in binary"<<endl;
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i =1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        cout<<"Step "<<step++<<": "<<n<<"/2, Remainder = "<<remainder<<", Quotient = " << n/2<<endl;
        n /=2;
        binaryNumber += remainder*i;
        i *= 10;    }
        return binaryNumber;
}