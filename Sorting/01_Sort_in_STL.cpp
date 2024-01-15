#include <iostream>
#include <algorithm>

using namespace std;

struct point
{
    int x, y;
    point(int a, int b)
    {
        x = a;
        y = b;
    }
};

bool cmp(point p1, point p2)
{
    return p1.x > p2.x;
}

int main()
{
    point arr[] = {{1, 2}, {5, 3}, {3, 9}};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size, cmp);
    for (auto i : arr)
    {
        cout << i.x << "," << i.y << "  ";
    }
    return 0;
}