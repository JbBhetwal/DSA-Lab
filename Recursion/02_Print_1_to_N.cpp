// Print all numbers from 1 to n using recursion
#include <iostream>
using namespace std;

void print(int n, int p = 1)
{
    // if (n < 1)
    //     return;

    // print(n - 1);            Non Tail recursive
    // cout << n << " ";

    if (p > n)
        return;
    cout << p << " ";
    print(n, p + 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n);
    return 0;
}