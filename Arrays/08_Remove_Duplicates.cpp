// Remove duplicates from sorted array

#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int size)
{
    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{

    int arr[] = {1, 3, 3, 6, 6, 6, 6, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicate(arr, size);

    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}