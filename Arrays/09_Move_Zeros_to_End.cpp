// Move all the zeros to the end of an array

#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cout << "Swapping " << arr[i] << " and " << arr[count] << endl;
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 3, 0, 0, 0, 6, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    update(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}