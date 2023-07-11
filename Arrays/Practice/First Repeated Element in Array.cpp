Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

O(N)
O(1)


class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        // int i=0, max = INT_MIN; USING THIS INSTEAD OF UNORDERED MAP THROWS TLE
        // while(i<n) {
        //     if(arr[i]>max)
        //         max = arr[i];
            
        // }
        
        
        unordered_map<int, int>hash;
        
        for(int i=0;i<n;i++) {
            hash[arr[i]]++;
        }
        
        for(int i=0;i<n;i++) {
            
            if(hash[arr[i]] > 1)
                return i+1;
        }
        
    return -1;
    }
};



ANOTHER BRUTE FORCE METHOD IS OF O(n^2) time complexity where we use one loop inside the other 
