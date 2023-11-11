/*
Q. Return the maximum sum of subsequence in which no two elements are adjacent

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void maxSumNonAdj(vector<int> &arr, int i, int sum, int &maxi)
{
    // base case
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include
    maxSumNonAdj(arr, (i + 2), sum + arr[i], maxi);

    // exclude
    maxSumNonAdj(arr, i + 1, sum, maxi);
}

int main()
{
    int sum = 0, i = 0;
    int maxi = INT_MIN;
    vector<int> v = {1, 2, 3, 5, 4};
    maxSumNonAdj(v, i, sum, maxi);

    cout << "The maximum sum of subsequence that are non adjacent is:" << maxi << endl;
    return 0;
}
