// Print all numbers from n to 1 using recursion
#include <iostream>
using namespace std;

void print(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    print(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n);
    return 0;
}