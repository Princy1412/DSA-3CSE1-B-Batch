#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertEnd(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void deleteBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

void deletePosition(int pos)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (pos == 1)
    {
        deleteBeginning();
        return;
    }

    node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }

        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    node *del = temp->next;
    temp->next = del->next;
    delete del;
}

void display()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reversePrint(node *temp)
{
    if (temp == NULL)
        return;

    reversePrint(temp->next);
    cout << temp->data << " ";
}

int main()
{
    int n, value;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insertEnd(value);
    }

    deleteBeginning();
    deleteEnd();
    deletePosition(2);

    cout << "Reverse: ";
    reversePrint(head);

    cout << "\nForward: ";
    display();

    return 0;
}