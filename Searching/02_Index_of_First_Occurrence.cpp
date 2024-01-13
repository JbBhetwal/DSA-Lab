// Find the index of first occurrence of an element in any sorted array

#include <iostream>
using namespace std;

// Recursively
int search(int arr[], int x, int high, int low = 0)
{
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] <= x)
    {
        return search(arr, x, high, mid + 1);
    }
    else if (mid == 0 || arr[mid - 1] != arr[mid])
    {
        return mid;
    }
    else
    {
        return search(arr, x, mid - 1, low);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, 40, size);
    return 0;
}