// Bubble Sort Implementation

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // If the array is already sorted and the further sorting is not required,
        // we use optimized bubble sort to track whether swapping happened or not.

        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            if (swapped == false)
            {
                break;
            }
        }
    }
}

int main()
{
    int arr[] = {20, 1, 4, 3, 85, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}