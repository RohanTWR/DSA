#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Q. Return the index of the key if present in the array using Recursion
*/

int binSearch(vector<int> v, int s, int e, int target)
{
    // for finding base case we look where we are stopping in the orginal iterative code.
    //
    //  base case 1 -> key not found
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    // base case 2 -> key found '
    if (v[mid] == target)
        return mid;

    // logic according to position of mid

    if (target > v[mid]) // search on right
        return binSearch(v, mid + 1, e, target);

    if (target < v[mid]) // search on left
        return binSearch(v, s, mid - 1, target);

    // NOTE that the part in which we want to search has been decreased as we send smaller part of the org array in every recursive call
}

int main()
{
    vector<int> v = {10, 20, 30, 40, 70, 99, 748};

    int key = 40;

    int n = v.size();
    int start = 0;
    int end = n - 1;
    int ans = binSearch(v, start, end, key);

    cout << "The number has been found at index :" << ans << endl;

    return 0;
}