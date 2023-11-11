/*
Q. You are given a rod of length x. You need to find the maximum number of segments that the rod can be cut into provided
the length of the cut segments can only be of x,y,z length
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxSegments(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;

    if (n < 0)
        return INT_MIN;

    int maxi = INT_MIN;

    // max segments for child nodes n-x,n-y and n-z
    int ans1 = maxSegments(n - x, x, y, z);
    int ans2 = maxSegments(n - y, x, y, z);
    int ans3 = maxSegments(n - z, x, y, z);

    // max segments for parent node
    maxi = max(ans1 + 1, max(ans2 + 1, ans3 + 1));

    return maxi;
}

int main()
{
    int length;
    int x, y, z;
    cout << "Enter the length of the rod : ";
    cin >> length;

    cout << "Enter the length of the allowed segments:";
    cin >> x >> y >> z;

    int ans = maxSegments(length, x, y, z);

    // case when all negative numbers are encountered at the base of the recursive tree  => invalid path
    if (ans < 0)
    {
        ans = 0;
    }
    cout << "The maximum number of segments required are : " << ans;

    return 0;
}

/*
Recursive tree and implmentation is similar to the Coin change or minElementsToSum problem
*/