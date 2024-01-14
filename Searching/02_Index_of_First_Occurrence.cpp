// Find the index of first occurrence of an element in any sorted array

#include <iostream>
using namespace std;

// Iteratively
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
    return -1;
}

// // Recursively
// int firstOcc(int arr[], int x, int high, int low = 0)
// {
//     int mid = (low + high) / 2;
//     if (arr[mid] > x)
//     {
//         return firstOcc(arr, x, mid - 1, low);
//     }
//     else if (arr[mid] < x)
//     {
//         return firstOcc(arr, x, high, mid + 1);
//     }
//     else
//     {
//         if (mid == 0 || arr[mid] != arr[mid - 1])
//         {
//             return mid;
//         }
//         else
//         {
//             return firstOcc(arr, x, mid - 1, low);
//         }
//     }
//     return -1;
// }

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << firstOcc(arr, 30, size);
    return 0;
}