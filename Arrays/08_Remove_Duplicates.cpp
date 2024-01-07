#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Code here
    }
}

int main()
{

    int arr[] = {1, 3, 3, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}