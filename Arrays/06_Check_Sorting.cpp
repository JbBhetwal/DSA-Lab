// Check whether the given array is sorted or not.
#include <iostream>
using namespace std;

bool checkSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 9, 4};
    int sLargest;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << checkSort(arr, size);
    return 0;
}