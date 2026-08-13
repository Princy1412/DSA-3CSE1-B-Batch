#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    int a[n];

    cout << "enter book IDs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Books borrowed more than once: ";

    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}