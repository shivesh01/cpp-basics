#include <iostream>
using namespace std;


// Create a pyramid
void a(){
    int rows;

    cout << " Enter number of rows(star Pyramid): ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "* ";

        cout << "\n";
    }
}





// Pyramid using numbers

void b(){
    int rows;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i =1; i<=rows; ++i)
    {
        for (int j =1; j<=i; ++j)
        {
            cout<<j<<" ";

        }
        cout<<"\n ";
    }
}



// Pyramid using alphabets

void c(){
    char input, alphabet = 'A';

    cout<<" Enter the uppercase character you want to print in the last row: ";
    cin >>input;

    for (int i =1; i<=(input-'A'+1); ++i)
    {
        for(int j =1; j <=i; ++j)
        {
            cout<<alphabet<<" ";

        }
        ++alphabet;

        cout<<endl;

    }
}
int main()
{
    c();
}

// Inverted half pyramid using *
// void d();
// {
//     int rows;

//     cout<<"Enter number of rows: ";
//     cin>>rows;

//     for(int i = rows; i >=1; --i)
//     {
//         for (int j =1; j<=i; ++j)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Inverted Half pyramid using numbers

// void e();
// {
//     int rows; 
//     cout<<"Enter number of rows: ";
//     cin >>rows;

//     for(int i = rows; i>=1; --i )
//     {
//         for (int j=1; j<=i; ++j)
//         {
//             cout<<j<<" ";

//         }
//         cout<<endl;

//     }
// }

// // full pyramid using *

// void f();
// {
//     int space, rows;

//     cout<<"Enter number of rows: ";
//     cin>>rows;

//     for(int i=1, k=0; i <=rows; ++i, k=0)
//     {
//         for(space =1; space <=rows -i; ++space)
//         {
//             cout<<" ";
//         }
//         while (k != 2*i-1)
//         {
//             cout<<"* "
//             ++k;
//         }
//         cout <<endl;
//     } 

// }

// // Pyramid using numbers

// void g();
// {
//     int rows, count = 0, count1 =0, k= 0;

//     cout<<" Enter number of rows: ";
//     cin>>rows;

//     for(int i=1; i<=rows; ++i)
//     {
//         for (int space =1; space <= rows -i; ++space)
//         {
//             cout<< " ";
//             ++count;

//         }
//         while( k != 2*i - 1)
//     {
//         if (count <= rows -1)
//         {
//             cout<<i+k<< " ";
//             ++count;
//         }
//         else 
//         {
//             ++count1;
//             cout<<i+k-2*count1<< " ";

//         }
//         ++k;
//     }
//     count1 = count = k = 0;

//     cout <<endl;
//     }
// }


// // Inverted full pyramid using *

// void h();{
//     int rows;

//     cout<<"Enter number of rows: ";
//     cin>>rows;

//     for(int i = rows; i >=1; --i)
//  {
//     for(int space = 0; space <rows -i; ++space)k
//     cout <<" ";

//     for(int j=1; j<=2*i-1; ++j)
//     cout<< "* ";

//     for(int j=0; j<i-1; ++j)
//     cout<<"* ";

//     cout<<endl;
//  }
// }

// // Pascal's triangle 

// void i();
// {
//     int rows,coef = 1;

//     cout<<"Enter number of rows: ";
//     cin>>rows;

//     for(int i = 0; i<rows; i++)
//     {
//     for( int space =1; space <= rows -i; space++)
//     cout<<" ";

//     for(int j = 0; j<=i; j++)
//     {
//         if (j == 0; j<=i; j++)
//         {
//             if (j==0 || i == 0)
//             coef = 1;
//             else
//             coef = coef*(i-j+1)/j;

//             cout<<coef<<" ";
        
//         } cout <<endl;
        
//     }
//     }
// }
// // Floyd's Triangle 

// void j();
// {

// int rows, number =1;
// cout<<"Enter number of rows: ";
// cin>>rows;

// for(int i =1; i<=rows; i++)
// {
//     for (int j = 1; j<=i; ++j)
// {
//     cout<<number <<" ";
//     ++number;
// }
// cout<<endl;
// }

// }
