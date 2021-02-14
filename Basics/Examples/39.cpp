// Convert Octal to Decimal and reverse

#include <iostream>
#include <cmath>
using namespace std;

// int octalToDecimal(int octalNumber);

// int main()
// {
//     int octalNumber;
//     cout << "Enter an octal number: ";
//     cin >> octalNumber;
//     cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";

//     return 0;
// }

// int octalToDecimal(int octalNumber)

// {
//     int decimalNumber = 0, i = 0, rem;
//     while (octalNumber != 0)
//     {
//         rem = octalNumber % 10;
//         octalNumber /= 10;
//         decimalNumber += rem * pow(8, i);
//         ++i;
//     }
//     return decimalNumber;
// }

// Now Decimal to Octal

int decimalToOctal(int decimalNumber);

int main()

{
    int decimalNumber;
    cout<<"Enter a decimal number: ";
    cin>>decimalNumber;
    cout<<decimalNumber<< " in decimal = "<<decimalToOctal(decimalNumber)<< " in octal";
    return 0;

}

int decimalToOctal( int decimalNumber)
{
    int rem,i = 1, octalNumber = 0;
    while(decimalNumber != 0)
    {
        rem = decimalNumber%8;
        decimalNumber /= 8;
        octalNumber += rem*i ;
        i *= 10;

    }

    return octalNumber;

}