// Count the number of occurrences of any element in an array

#include <iostream>
using namespace std;

int firstOcc(int arr[], int x, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}

int lastOcc(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int countOcc(int arr[], int n, int x)
{
    int first = firstOcc(arr, x, n);
    if (first == -1)
        return 0;
    return (lastOcc(arr, n, x) - first + 1);
}

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30, 30, 40, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << countOcc(arr, size, 30);
    return 0;
}