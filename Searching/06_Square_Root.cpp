// Find the square root of the number in integer.

#include <iostream>
using namespace std;

int sqroot(int n)
{
    int high = n;
    int low = 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout << sqroot(135);
    return 0;
}