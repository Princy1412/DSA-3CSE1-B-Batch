#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int marks[] = {98,33,65,47,81};
    int n = sizeof(marks) / sizeof(int);

    int bubble[n], selection[n], insertion[n];

    for (int i = 0; i < n; i++)
    {
        bubble[i] = marks[i];
        selection[i] = marks[i];
        insertion[i] = marks[i];
    }

    cout << "Original Marks: ";
    printArray(marks, n);

    bubbleSort(bubble, n);
    cout << "After Bubble Sort: ";
    printArray(bubble, n);

    selectionSort(selection, n);
    cout << "After Selection Sort: ";
    printArray(selection, n);

    insertionSort(insertion, n);
    cout << "After Insertion Sort: ";
    printArray(insertion, n);

    return 0;
}