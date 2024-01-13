// Print all moves of tower of hanoi to move n disc from A to C

#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move disc " << n << " from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move disc " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}

int main()
{
    TOH(9, 'P', 'Q', 'R');
    return 0;
}