// Merge two sorted arrays in sorted order

#include <iostream>
using namespace std;

void mergeSort(int a[], int n1, int b[], int n2)
{
    int n = n1 + n2, j = 0, k = 0, i = 0;
    int temp[n];
    while (j < n1 && k < n2)
    {
        if (a[j] >= b[k])
        {

            temp[i] = b[k];
            k++;
            i++;
        }
        else if (b[k] > a[j])
        {

            temp[i] = a[j];
            j++;
            i++;
        }
        cout << temp[i - 1] << " ";
    }
    while (j < n1)
    {
        temp[i] = a[j];
        j++;

        cout << temp[i] << " ";
        i++;
    }
    while (k < n2)
    {
        temp[i] = a[k];
        k++;

        cout << temp[i] << " ";
        i++;
    }
}

int main()
{
    int a[] = {10, 15, 40};
    int n1 = sizeof(a) / sizeof(a[0]);
    int b[] = {5, 6, 6, 15};
    int n2 = sizeof(b) / sizeof(b[0]);
    mergeSort(a, n1, b, n2);
    return 0;
}