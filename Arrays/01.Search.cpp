#include <iostream>
using namespace std;

int search(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {2, 5, 4, 8, 1, 3}; // Initialization
    int value, index;

    cout << "Enter the value to be searched:";
    cin >> value;
    cout << sizeof(arr) / sizeof(arr[0]);

    // index = search(arr, sizeof(arr) / sizeof(arr[0]), value);

    cout << "The searched value is in index " << index;

    return 0;
}