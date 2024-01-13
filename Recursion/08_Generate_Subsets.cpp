// Generate all the subsets of the given string

#include <iostream>
using namespace std;

void gen(string s, string def = "", int i = 0)
{
    if (i == s.length())
    {
        cout << def << " ";
        return;
    }
    gen(s, def, i + 1);
    gen(s, def + s[i], i + 1);
}

int main()
{
    gen("abc");
    return 0;
}