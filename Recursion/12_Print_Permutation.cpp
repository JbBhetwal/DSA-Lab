// Print all the permutations of the string

#include <iostream>
using namespace std;

void perm(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        perm(s, i + 1);
        swap(s[j], s[i]);
    }
}

int main()
{
    string s = "ABC";
    perm(s);
    return 0;
}