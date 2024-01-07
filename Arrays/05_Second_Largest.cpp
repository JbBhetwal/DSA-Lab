// Find the second largest element of an array in O(n) time complexity
#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size)
{
    int largest = 0, res = -1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[largest] < arr[i + 1])
        {
            res = largest;
            largest = i + 1;
        }
        else if (arr[largest] > arr[i + 1])
        {
            if (res == -1)
            {
                res = i + 1;
            }
            else
            {
                if (arr[res] < arr[i + 1])
                {
                    res = i + 1;
                }
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {-10, -10};
    int sLargest;
    int size = sizeof(arr) / sizeof(arr[0]);
    sLargest = findSecondLargest(arr, size);
    cout << "Second largest element is " << arr[sLargest];
    return 0;
}