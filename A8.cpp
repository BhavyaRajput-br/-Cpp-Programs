// WAP to check whether it is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int d1, d2, d3, n;

    cout << "Enter a 3 digit number: ";
    cin >> n;

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    if(d1 == d3)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
