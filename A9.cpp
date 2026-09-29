//wap to  find gcd 
#include <iostream>
using namespace std;

int main()
{
    int a, b, r, gcd;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    gcd = a;

    if (gcd > 0)
    {
        cout << "GCD = " << gcd;
    }
    else
    {
        cout << "Invalid numbers";
    }

    return 0;
}
