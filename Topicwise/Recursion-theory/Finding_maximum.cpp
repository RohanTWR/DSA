#include <iostream>
#include <limits.h>

using namespace std;

// note when finding max or min requiring us to store the key after finding it should be done using pass by reference.
void findMax(int arr[], int n, int i, int &maxi)
{
    // base case
    if (i >= n)
        return;

    // computation of logic
    //  1 case sambhal liya
    maxi = max(arr[i], maxi);

    // baki recursion sambhal lega
    // always use i+1 not i++
    findMax(arr, n, i + 1, maxi);
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);

    cout << "The maximum element in the array is : " << maxi;
    cout << "\n";

    return 0;
}
