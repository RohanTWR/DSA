/*need to find all occurences of a letter or key in a given string and store the indexes in a vector and
 print it
*/

#include <iostream>
#include <vector>
using namespace std;

void printAllOccurences(string &s, int &len, int i, char &key, int &count, vector<int> &v)
{

    // base case
    if (i >= len)
        return;

    // computation of logic for 1 case only
    if (s[i] == key)
    {
        v.push_back(i);
        count++;
    }
    // baaki recursion sambhal lega
    printAllOccurences(s, len, i + 1, key, count, v);
}

int main()
{
    string s = "Rohan Tiwari";
    int len = s.length();

    int i = 0;
    char key = 'R';
    int count = 0;
    vector<int> v;
    printAllOccurences(s, len, i, key, count, v);

    cout << "The number of occurences of " << key << " in the string " << s << " are: " << count << endl;

    if (count == 0)
        v.push_back(-1);

    cout << "The indexes of all the occurences are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
