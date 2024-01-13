// Search the element x in the given sorted array using binary search.

#include <iostream>
using namespace std;

// int search(int arr[], int n, int x)
// {
//     int low = 0, high = n - 1;
//     while (low < high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
// }

// Recursively
int search(int arr[], int x, int high, int low = 0)
{
    while (low < high)
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
        else
        {
            return search(arr, x, mid - 1, low);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << search(arr, 4, 5);
    return 0;
}