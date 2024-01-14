// Find the index of last occurrence of an element in any sorted array

#include <iostream>
using namespace std;

// Iteratively
int search(int arr[], int n, int x)
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

// Recursively
// int search(int arr[], int n, int x, int low, int high)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (arr[mid] < x)
//     {
//         return search(arr, n, x, mid + 1, high);
//     }
//     else if (arr[mid] > x)
//     {
//         return search(arr, n, x, low, mid - 1);
//     }
//     else
//     {
//         if (mid == n - 1 || arr[mid] != arr[mid + 1])
//         {
//             return mid;
//         }
//         else
//         {
//             return search(arr, n, x, mid + 1, high);
//         }
//     }
// }

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30, 30, 40, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, size, 20);
    return 0;
}