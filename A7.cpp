//wap to make calculator perform +,-,*,/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    float a, b;

    cout << "\nEnter + to perform addition\n";
    cout << "\nEnter - to perform subtraction\n";
    cout << "\nEnter * to perform multiplication\n";
    cout << "\nEnter / to perform division\n";

    cin >> ch;

    switch(ch)
    {
        case '+':
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
            cout << "Sum of a and b = " << a + b;
            break;

        case '-':
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
            cout << "Subtraction of a and b = " << a - b;
            break;

        case '*':
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
            cout << "Multiplication of a and b = " << a * b;
            break;

        case '/':
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
            cout << "Division of a and b = " << a / b;
            break;
    }

    return 0;
}


      
