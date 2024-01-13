// If n be the number of person and kth person is to be killed in circular manner. Find the survivor.

#include <iostream>
using namespace std;

int Josephus(int n, int k)
{
    if (n == 1)
        return 0;

    return (Josephus(n - 1, k) + k) % n;
}

int main()
{
    cout << Josephus(7, 3);
    return 0;
}