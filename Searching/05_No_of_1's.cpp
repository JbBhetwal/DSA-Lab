// Count number of 1's in binary sorder number

#include <iostream>
using namespace std;

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

int count(int arr[], int n)
{
    int temp = firstOcc(arr, 1, n);
    return n - temp;
}

int main()
{

    int binary[] = {0, 0, 1, 1, 1, 1};
    int size = sizeof(binary) / sizeof(binary[0]);
    cout << count(binary, size);
    return 0;
}