// Print the sum of digits using recursion
#include <iostream>
using namespace std;

int sumofDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumofDigits(n / 10);
}

int main()
{
    cout << sumofDigits(123456789);
    return 0;
}