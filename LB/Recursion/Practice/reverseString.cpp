/*
Q. Reverse a string (one word) in-place recursively.

*/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // computation of one case
    swap(s[start], s[end]);

    // RE call
    reverse(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "Enter a string you want to reverse:";
    cin >> s;

    reverse(s, 0, s.size() - 1);

    cout << "The reversed string is: " << s;

    return 0;
}