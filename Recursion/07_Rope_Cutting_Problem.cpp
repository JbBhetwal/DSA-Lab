// Divide the rope of length n into maximum number of pieces such that each length of piece lies within [a, b, c].

#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res1 = findMax(n - a, a, b, c);
    int res2 = findMax(n - b, a, b, c);
    int res3 = findMax(n - c, a, b, c);
    int res = max({res1, res2, res3});
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    cout << findMax(23, 12, 9, 11) << endl;
    return 0;
}