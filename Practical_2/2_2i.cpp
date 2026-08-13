#include <iostream>
using namespace std;
int binarysearch(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, target;
    cout << "enter n " << endl;
    cin >> n;
    int a[n];
    cout << "enter book codes " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter target code: ";
    cin >> target;
    int position = binarysearch(a, n, target);
    if (position == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Element Found at : " << position + 1 << endl;
    }
    return 0;
}