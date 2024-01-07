// Reverse the given array.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {1, 3, 3, 6, 2};
    int sLargest;
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}