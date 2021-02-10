// // Increment  and Decrement Operator Overloading  with no return type


// // 1. prefix ++ Increment

// #include <iostream>
// using namespace std;

// class check {

// private:
// int i ;
// public :
// check(): i(0){ }
// void operator ++()
// {++i;}
// void Display()
// {cout<<"i="<<i<<endl;}
// };

// int main(){
// check obj;

// obj.Display();

// ++obj;

// obj.Display();

// return 0;
// }





// // 2. Prefix ++ Increment using obj = ++obj

// #include <iostream>
// using namespace std;

// class check
// {
// private:
// int i;
// public:
// check(): i(0){ }

// check operator ++()
// {
//     check temp;
//     ++i;
//     temp.i = i;

//     return temp;
// }

// void Display()
// {
//     cout<<"i = "<< i << endl;
// }

// };

// int main(){
// check obj, obj1;
// obj.Display();
// obj1.Display();

// obj.Display();
// obj1.Display();

// return 0;
// }





// // 3.Postfix Increment ++ operator Overloading 

// #include <iostream>
// using namespace std;


// class check
// {
// private:
// int i;
// public:
// check(): i(0){ }
// check operator ++ ()
// {
//     check temp;
//     temp.i = ++i;
//     return temp;
// }

// check operator ++ (int)
// {
//     check temp;
//     temp.i = i ++;
//     return temp;
// }

// void Display()
// {cout<<"i = "<<i <<endl;}

// };

// int main(){
// check obj, obj1;
// obj.Display();
// obj1.Display();

// obj = ++obj;
// obj.Display();
// obj1.Display();

// obj1 = obj++;
// obj.Display();
// obj1.Display();

// return 0;
// }





// 4. Operator Overloading of Decrement Operator


#include <iostream>
using namespace std;

class check
{
private:
int i;
public:
check(): i(3){ }
check operator --()
    {
        check temp;
        temp.i = --i;
        return temp;
    }

    check operator -- (int )
    {
        check temp ;
        temp.i = i--;
        return temp;

    }
    
    void Display()
    {
        cout<< " i = "<<i <<endl;
    }

};
int main()
{
check obj, obj1;
obj.Display();
obj1.Display();

obj = --obj;
obj.Display();
obj1.Display();

obj1 = obj--;
obj.Display();
obj1.Display();

return 0;
}