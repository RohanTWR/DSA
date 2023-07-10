/*

Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

Your Task:
You don't need to read input or print anything. Complete the function factorial() that takes integer N as input parameter and returns a list of integers denoting the digits that make up the factorial of N.


Expected Time Complexity : O(N2)
Expected Auxilliary Space : O(1)

APPROACH:
We have two loops.
First loop takes care of numbers we need to multiply to get to the factorial
The second loop takes care of the multiplication and it storing in the vector

OBSERVE CAREFULLY HOW: A two digit number is multiplied with a single digit. 
In the second loop we multiply current i with the already stored result till now. The while loop takes care of storing the carry if any. Note since adjusting the carry is the last step it is at the last of the outer loop

OBSERVE that we are actually storing the result in opposite manner by pushing back. Hence we need to reverse the ans vector at last.
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution {
public:
    vector<int> factorial(int N){
       vector <int> ans; 
       ans.push_back(1);
        int carry=0;
        
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
                int x = ans[j]*i+carry;
                ans[j]= x % 10; // Here we need to replace the present digits and not push
                carry = x / 10;
                }  
                while(carry){
                    ans.push_back(carry%10); // since carry will be added to the right we are pushing here
                    carry = carry / 10;
                    
                }
            
            // Note the red dots. These are the statements where we are pushing in the vector but in opposite direction. Thus we have to reverse our vector once we are done storing the final number after last iteration.
            
        
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends