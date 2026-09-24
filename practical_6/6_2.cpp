#include <iostream>
using namespace std;

int main()
{
    string stack[100];
    string page;
    int top = -1;
    int q;

    cout << "Enter first page: ";
    cin >> page;

    stack[++top] = page;
    cout << "Current Page: " << stack[top] << endl;

    cout << "Enter number of operations: ";
    cin >> q;

    cout << "Enter operations (visit / back / exit):" << endl;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "visit")
        {
            cin >> page;
            stack[++top] = page;
            cout << "Current Page: " << stack[top] << endl;
        }
        else if (op == "back")
        {
            if (top == 0)
                cout << "No History" << endl;
            else
            {
                top--;
                cout << "Current Page: " << stack[top] << endl;
            }
        }
        else if (op == "exit")
        {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}