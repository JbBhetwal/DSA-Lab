// Print n Fibonacci numbers:
#include <iostream>
using namespace std;

// void fibonacci(int n, int a = 1, int b = 1)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << a << " ";
//     int temp = b;
//     b = a + b;
//     a = temp;

//     fibonacci(n - 1, a, b);
// }

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of Fibonacci numbers:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}