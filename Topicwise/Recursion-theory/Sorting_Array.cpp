/*
Q. Find whether an array is sorted or not by returning a boolean. Do it recursively.


*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &v, int &n, int i) // Vector is passed by reference so as to avoid creation of new vectors in call stack in every call
{
    // base case
    if (i == n - 1) // NOTE: the control enters the logic below for i (max) if n-2. We are choosing 1==n-1 here so that the below logic does not go out of bound.
        return true;

    // 1 case solve karna hai
    if (v[i + 1] < v[i]) // only checks for ascending and NOT strictly ascending ( requires =)
        return false;

    // baki recursion sambhal lega
    return checkSorted(v, n, i + 1);
}

int main()
{
    // test case
    vector<int> v = {10, 20, 40, 30, 50};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v, n, i);

    if (isSorted)
        cout << "Array is sorted " << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}
