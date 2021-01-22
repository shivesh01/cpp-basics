// Note: We can do the same thing with if...else...if ladder. However, the syntax of the switch statement is cleaner and much easier to read and write.

// program to build simple calculator

#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout << "Enter an operator (+,-,*,/): ";
    cin >> oper;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << "/" << num2 << num1 / num2;
        break;
    default:
        cout << "Error! The operator is not correct";
        break;
    }
    return 0;
}
