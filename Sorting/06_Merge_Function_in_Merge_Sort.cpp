// Merge function in Merge Sort

#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge_function(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[n1 + i];
    }
    int i = 0, j = 0, k = 0;
    display(left, n1);
    display(right, n2);
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            k++;
            i++;
        }
        else
        {
            a[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        k++;
        j++;
    }
}

int main()
{
    int a[] = {5, 8, 12, 14, 1, 6, 7, 9};
    int mid = 3;
    int low = 0;
    int n = sizeof(a) / sizeof(a[0]);
    int high = n - 1;
    merge_function(a, low, mid, high);
    display(a, n);
    return 0;
}