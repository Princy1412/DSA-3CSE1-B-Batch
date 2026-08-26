#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertBeginning(node *&head, int value)
{
    node *newnode = new node();

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertEnd(node *&head, int value)
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

void insertSpecificPos(node *&head, int value, int pos)
{
    if (pos < 1)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        insertBeginning(head, value);
        return;
    }

    node *ptr = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (ptr == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }

        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    node *newnode = new node();

    newnode->data = value;
    newnode->next = ptr->next;
    ptr->next = newnode;
}

void traverse(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int n, value;

    cout << "Enter number of patients: ";
    cin >> n;

    cout << "Enter patient tokens:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insertEnd(head, value);
    }

    insertBeginning(head, 5);
    insertEnd(head, 105);
    insertSpecificPos(head, 200, 5);

    cout << "Final queue: ";
    traverse(head);

    return 0;
}