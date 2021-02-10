// // 1. Calculate Power Manually

// #include <iostream>
// using namespace std;

// int main()
// {
//     int exponent;
//     float base, result = 1;

//     cout<<"Enter base and exponent respectively: ";
//     cin>>base>>exponent;

//     cout<<base<<"^"<<exponent<<" = ";

//     while(exponent != 0){
//         result *= base;
//         --exponent;
//     }

//     cout<<result;
//     return 0;
// }



// 2. Compute using Pow() function

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float base, exponent, result;

    cout<<"Enter base and exponent respectively: ";
    cin>>base>>exponent;

    result = pow(base, exponent);

    cout<<base<<"^"<<exponent <<" = "<<result;
    
    return 0;
}