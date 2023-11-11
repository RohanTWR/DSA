#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minElements(vector<int> &arr, int pres_node)
{
    // base case 1
    if (pres_node == 0)
        return 0;

    // base case 2
    if (pres_node < 0)
        return INT_MAX;

    // if we encounter a negative number at last, such path is invalid
    // therefore we would want to skip updating our min_ele for this path by sending INT_MAX
    //  and then using the INT_MAX return to identify such a case and avoid updating min_ele later

    int min_ele = INT_MAX;
    // traversing the array to find minimum elements for present node
    for (int i = 0; i < arr.size(); i++)
    {
        // calling function to get min elements to make <child node> stored in ans
        int ans = minElements(arr, pres_node - arr[i]);

        // currently min_ele is storing min element path from other child branches
        //  therefore we compare the minimum path with the answer we found for the path along this i;

        // case when negative base case is encountered and INT_MAX is returned from child node
        if (ans != INT_MAX)
            min_ele = min(min_ele, ans + 1);
        // ans+1 is the min. elements required to make parent node / present node
    }
    return min_ele;
}
int main()
{
    int target;
    cout << "Enter the target for which you require minimum number of elements to reach to:";
    cin >> target;

    vector<int> v = {1, 2, 3};

    int min_ele = minElements(v, target);
    cout << "Min. elements required:"
         << min_ele << "\n";

    return 0;
}
