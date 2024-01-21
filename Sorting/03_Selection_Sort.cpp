// Selection Sort

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_ind] > arr[j])
            {
                swap(arr[min_ind], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {1, 4, 2, 9, 23, 45, 12};
    int size = (sizeof(arr) / sizeof(arr[0]));
    SelectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}