#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter stack size: ";
    cin >> n;

    int stack[n];
    int top = -1;

    string choice;
    int value;

    while (true)
    {
        cout << "\nEnter operation (push/pop/exit): ";
        cin >> choice;

        if (choice == "push")
        {
            if (top == n - 1)
            {
                cout << "Stack is full" << endl;
            }
            else
            {
                cout << "Enter value: ";
                cin >> value;

                stack[++top] = value;

                cout << "Placed: " << value << endl;
                cout << "Current top: " << stack[top] << endl;
            }
        }
        else if (choice == "pop")
        {
            if (top == -1)
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Taken: " << stack[top] << endl;
                top--;
            }
        }
        else if (choice == "exit")
        {
            break;
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }

    return 0;
}