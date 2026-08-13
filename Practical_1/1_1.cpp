#include <iostream>
using namespace std;
int main()
{
    int n, h;
    cout << "enter no. of items" << endl;
    cin >> n;
    cout << "enter no. of hours" << endl;
    cin >> h;
    int a[n];
    h = h % n;
    cout << "enter items " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < h; i++)
    {
        int first = a[0];
        for (int j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = first;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}