#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "enter n " << endl;
    cin >> n;
    int a[n];
    cout << "enter numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the plate number that you want to find " << endl;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            cout << "Target plate Found at position " << i + 1 << endl;
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Not Found" << endl;
    }

    return 0;
}