// Return the number of subsets whose sum is given

#include <iostream>
using namespace std;

int subsetSum(int arr[], int n, int sum)
{
    if (n <= 0)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }
    return subsetSum(arr, n - 1, sum - arr[n - 1]) + subsetSum(arr, n - 1, sum);
}

int main()
{
    int arr[] = {10, 5, 2, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 8;
    cout << subsetSum(arr, size, sum);
    return 0;
}