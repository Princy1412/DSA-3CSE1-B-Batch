#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int stack[n];
    int top = -1;

    if (top == n - 1)
        cout << "Stack is full" << endl;
    else
    {
        stack[++top] = 10;
        cout << "Placed: 10" << endl;
        cout << "Current top: " << stack[top] << endl;
    }

    if (top == n - 1)
        cout << "Stack is full" << endl;
    else
    {
        stack[++top] = 20;
        cout << "Placed: 20" << endl;
        cout << "Current top: " << stack[top] << endl;
    }

    if (top == n - 1)
        cout << "Stack is full" << endl;
    else
    {
        stack[++top] = 30;
        cout << "Placed: 30" << endl;
        cout << "Current top: " << stack[top] << endl;
    }

    if (top == n - 1)
        cout << "Stack is full" << endl;
    else
    {
        stack[++top] = 40;
        cout << "Placed: 40" << endl;
    }

    if (top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        cout << "Taken: " << stack[top] << endl;
        top--;
    }

    cout << "Current top: " << stack[top] << endl;

    return 0;
}