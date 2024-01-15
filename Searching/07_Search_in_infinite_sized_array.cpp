// Search an element in an infinite sized array

#include <iostream>
using namespace std;

int bsearch(int arr[], int x, int high, int low = 0)
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
            return bsearch(arr, x, high, mid + 1);
        }
        else
        {
            return bsearch(arr, x, mid - 1, low);
        }
    }
    return -1;
}

int search(int arr[], int x)
{
    int i;
    if (x == arr[0])
        return 1;
    for (i = 1;; i = 2 * i)
    {
        if (arr[i] > x)
        {
            break;
        }
    }
    return bsearch(arr, x, i - 1, i / 2 + 1) + 1;
}

int main()
{
    int arr[] = {1, 3, 4, 6, 8, 9, 12, 14, 17, 23};
    cout << search(arr, 12);
    return 0;
}