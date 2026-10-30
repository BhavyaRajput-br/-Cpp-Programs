//wap in c++ in whether the number is divisible by 4 and 6
// Check whether a number is divisible by both 4 and 6

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if (n % 4 == 0 && n % 6 == 0)
    {
        cout << "Number is divisible by both 4 and 6";
    }
    else
    {
        cout << "Number is not divisible by both 4 and 6";
    }

    return 0;
}