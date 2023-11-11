#include <iostream>
using namespace std;

void printArrayRecursively(int arr[], int n, int i)
{
    // base case
    if (i >= n)
        return;

    // Doing Head recursion

    // execution
    cout << arr[i] << " ";

    // baaki recursion sambhal lega
    printArrayRecursively(arr, n, i + 1);
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    printArrayRecursively(arr, n, i);
    cout << "\n";

    return 0;
}
