/*
Your Task:  
You don't need to read input or print anything. 
Complete the function remove_duplicate() which takes the array A[] and its size N as input parameters and modifies it in place to delete all the duplicates.
The function must return an integer X denoting the new modified size of the array. 


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: {2}
Explanation: After removing all the duplicates 
only one instance of 2 will remain.


WORKS FOR ALL CASES IN GFG.


*/

class Solution{
public:
    int remove_duplicate(int a[],int n) {
        
    a[n]= INT_MIN; // to deal with the case when all are equal
    int i=0,j=0;    //i denotes any position where we can put a disinct element AND j is used for travesering the array
    while(j<n) {
        
        if(a[j]!=a[j+1]) {
            a[i]=a[j];   // moves all distinct elements to left side
            i++;
        }
    j++;
        
    
    }
    return i; // we are returning i since at the end it is pointing at a potential position only which does not hold true values.
    }
};


// MARKING NEGATIVE METHOD BUT USING VECTOR

class Solution{
public:
    int remove_duplicate(int a[],int n) {
        
         int value, a[],j=0;
        
         for(int i=0;i<n;i++) {
            
             value=abs(a[i]);
            
             if(a[value]<0) {
                 v[j++]=a[i];
                
             a[value] *= -1;
            
         }
        
         return v;
        
   }
   
 };
 
 
// VISITING METHOD BUT ONLY WORKS WHEN WE HAVE ONLY ONE DIGIT REPEATING MULTIPLE TIMES;
// This method puts every digit in its corresponding index. When we encounter the repeated digit and its already present in its index at 0th position always, we knoow that this our repeated digit.
class Solution{
public:
    int remove_duplicate(int a[],int n) {
        
        while(nums[0]!=nums[nums[0]]) {
          
          swap(nums[0],nums[nums[0]);
          
          
        }
        
        return nums[0];
};
