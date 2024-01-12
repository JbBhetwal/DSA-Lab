// Check whether the given string is pallindrome or not using pallindrome
#include <iostream>
#include <string>
using namespace std;

bool checkPallindrome(string &s, int start, int end)
{
    if (start >= end)
        return true;

    return (s[start] == s[end] && checkPallindrome(s, start + 1, end - 1));
}

int main()
{
    string str = "abbcbbaa";
    cout << checkPallindrome(str, 0, 7);
    return 0;
}