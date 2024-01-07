#include <iostream>
using namespace std;

int del(int arr[], int pos, int size)
{
    int idx = pos - 1;
    for (int i = idx; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return size;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;
    cout << "Enter the position of the element to delete:";
    cin >> pos;
    size = del(arr, pos, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}