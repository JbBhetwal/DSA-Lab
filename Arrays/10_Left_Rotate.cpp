// Left rotate and array by d

#include <iostream>
using namespace std;

void reverse(int arr[], int a, int b, int size)
{
    while (a < b)
    {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
}

void leftRotate(int arr[], int size, int d)
{
    reverse(arr, 0, d - 1, size);
    reverse(arr, d, size - 1, size);
    reverse(arr, 0, size - 1, size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the value by which array should be rotated:";
    int d;
    cin >> d;

    leftRotate(arr, size, d);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}