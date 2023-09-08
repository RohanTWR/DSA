#include <iostream>
using namespace std;

void printDigits(int &n)
{
    // base case
    if (n == 0)
        return;

    // magical statement-baaki recursion sambhal lega
    int new_val = n / 10;
    printDigits(new_val);

    // computation of logic for 1 case
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    int n = 0;

    // handling corner case of 0
    if (n == 0)
        cout << "0";

    printDigits(n);

    cout << "\n";

    return 0;
}