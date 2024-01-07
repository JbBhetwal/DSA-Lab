// Find the largest element of an array in O(n) time complexity
#include <iostream>
using namespace std;

int findLargest(int arr[], int size)
{
    int largest = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            largest = i + 1;
        }
    }
    return largest;
}

int main()
{
    int arr[] = {2, 4, 1, 6, 3};
    int largest;
    int size = sizeof(arr) / sizeof(arr[0]);
    largest = findLargest(arr, size);
    cout << "Largest element is " << arr[largest];
    return 0;
}