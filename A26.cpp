
#include <iostream>
using namespace std;

int main()
{
    int a[5], key;
    int *p;

    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    p = a;

    for(int i = 0; i < 5; i++)
    {
        if(*(p + i) == key)
        {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}

