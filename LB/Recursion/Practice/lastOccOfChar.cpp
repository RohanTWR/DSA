/*
Q. Find the last occurence of a character in the given string recursively

Method -1 : Left to Right RE
Method - 2: Right to left RE
Method -3 : Use STL function
*/
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void lastOccOfCharLTR(string &str, char &ch, int i, int &ans)
{

    // base case
    if (i >= str.size())
    {
        return;
    }

    // 1 case solve
    if (str[i] == ch)
    {
        ans = i;
    }

    // RE call
    lastOccOfCharLTR(str, ch, i + 1, ans);
}

void lastOccOfCharRTL(string &str, char &ch, int i, int &ans)
{
    // base case
    if (i < 0)
        return;

    // 1 case solve
    if (str[i] == ch)
    {
        ans = i;
        return;
    }

    // RE call
    lastOccOfCharRTL(str, ch, i - 1, ans);
}

int main()
{
    string s;
    cout << "Enter a string " << endl;
    cin >> s;

    char ch;
    cout << "Enter the letter you want the last occurence of:" << endl;
    cin >> ch;
    int ans = -1;
    // lastOccOfCharLTR(s, ch, 0, ans);
    lastOccOfCharRTL(s, ch, s.size() - 1, ans);
    cout << "The last occurence is: " << ans;
    return 0;
}
