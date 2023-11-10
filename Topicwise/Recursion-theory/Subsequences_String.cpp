/*
Q. To find al lthe subsequences of a string using Recursion. Store them in a vector and print the vector from main

Here we will use include/exclude pattern OR pick/not-pick pattern

include => concatanate or add the string
exclude => string as it is, is taken
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSubseq(string str, string op, int i, vector<string> &v)
{
    // base case
    if (i >= str.length())
    {
        //  cout << op << endl; // once the string has been traversed completely, we print the temporarily stored subseq
        v.push_back(op);
        return;
    }

    // logic for excluding the present considered letter of the string indicated by i
    printSubseq(str, op, i + 1, v);

    // logic for including the present considered letter of string indicated by i
    op.push_back(str[i]);
    printSubseq(str, op, i + 1, v);

    // NOTE if we had taken include case first then we would have to first pop the included letter then call the function
    /*
    printSubseq(str,op,i+1); INCLUDE case

    op.pop_back(str[i]); This will remove the considered letter in subseq for include case
    printSubseq(str, op, i+1); EXCLUDE CASE

    */
}

int main()
{
    string str = "rohan tiwari";
    string output = ""; // to store temporarilly all our subsequences

    int i = 0;
    vector<string> v;
    printSubseq(str, output, i, v);

    for (auto val : v)
    {
        cout << val << " ";
    }

    cout << endl
         << "The number of subsequences of the given string are : " << v.size() << endl;

    return 0;
}
