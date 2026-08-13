#include <iostream>
using namespace std;
int binarysearch(int a[], int key, int high, int low)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + (high - low) / 2;

    if (a[mid] == key)
    {
        return mid;
    }
    if (key < a[mid])
    {
        return binarysearch(a, key, mid - 1, low);
    }
    else
    {
        return binarysearch(a, key, high, mid + 1);
    }
}
int main()
{
    int n, target;
    cout << "enter n " << endl;
    cin >> n;
    int high = n - 1, low = 0;
    int a[n];
    cout << "enter book codes " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter target code: ";
    cin >> target;
    int position = binarysearch(a, target, high, low);
    if (position == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Element Found at : " << position + 1 << endl;
    }
    return 0;
}