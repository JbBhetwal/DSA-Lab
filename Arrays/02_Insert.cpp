#include <iostream>
using namespace std;

int insert(int arr[], int size, int cap, int pos, int x)
{
    int idx = pos - 1;
    if (size == cap) // Checking the array full condition
    {
        return size;
    }

    for (int i = size - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    size++;
    return size;
}

int main()
{
    int arr[10] = {1, 3, 5, 3, 5, 7};
    int size = 6, capacity = 10;
    int position, value;

    cout << "Enter the position to add a value : ";
    cin >> position;
    cout << "Enter the value to be added : ";
    cin >> value;

    size = insert(arr, size, capacity, position, value);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}