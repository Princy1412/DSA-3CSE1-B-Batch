#include <iostream>
using namespace std;
int search_plate(int a[], int n, int key, int i)
{
    if (i == n)
        return -1;
    if (a[i] == key)
    {
        return i;
    }
    return search_plate(a, n, key, i + 1);
}
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
    int position = search_plate(a, n, target, 0);
    if (position == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Target plate Found at position " << position + 1 << endl;
    }
    return 0;
}