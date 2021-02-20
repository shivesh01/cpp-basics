// Add Distances using structure 
#include <iostream>
using namespace std;

// Declaring a structure
struct distance
{
    // Data members: 
    int feet;
    float inch;
} // created two variables d1, d2
d1, d2, sum;


int main(){

    cout<<"Enter 1st distance, "<<endl;
    cout<<"Enter feet: ";
    cin>>d1.feet;
    cout<<"Enter inch: ";
    cin>>d1.inch;

    cout<<"\nEnter information for 2nd distance"<<endl;
    cout<<"Enter feet: ";
    cin>>d2.feet;
    cout<<"Enter inch: ";
    cin>>d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.feet+d2.inch;

    // changing inches to feet if inch is greater than 12
    if(sum.inch>12)
{
    ++ sum.feet;
    sum.inch -= 12;
}

cout<<endl<<"Sum of distances = "<<sum.feet<<" feet "<<sum.feet<<" inches";
return 0;


}