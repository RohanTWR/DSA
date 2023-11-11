// need to find if a letter is present or not in the given string

#include <iostream>
using namespace std;

bool checkKey(string &s, int &len, int i, char &key)
{
    // base case
    if (i >= len)
        return false;

    // computation of logic for 1 case only
    if (s[i] == key)
        return true;

    // magical statement-baki recursion sambhal lega
    return checkKey(s, len, i + 1, key);
}

int main()
{
    string s = "Rohan Tiwari";
    int len = s.length();

    int i = 0;
    char key = 'T';

    if (checkKey(s, len, i, key))
        cout << "Yes, the letter " << key << " is present in the given string " << s << "\n";
    else
        cout << "No, the letter " << key << " is not present in the given string " << s << "\n";
    return 0;
}