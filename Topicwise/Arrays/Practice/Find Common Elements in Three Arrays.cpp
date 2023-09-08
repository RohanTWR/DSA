Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.

// ONLY WORKS WHEN THE ARRAYS ARE SORTED

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    
    
    // TIME COMPLEXITY O(n1 + n2 + n3)
    // SPACE COMPLEXITY O(min(n1,n2,n3))
    // USING SET APPROACH AS A DATA STRUCTURE
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           
         vector<int> v;
         set <int> st; // to deal with duplicates that may be present in the arrays;
         
        // this approach also inputs the duplicates but set takes care of it
        int i=0,j=0,k=0;  // pointers for each of the 3 arrays
         
         while(i<n1 && j<n2 && k<n3) 
         {
         if(A[i] == B[j] && B[j]== C[k])
             {
                 st.insert(A[i]);
                 i++; j++ ; k++;
             }
         else if(A[i] < B[j])
             i++;
         else if(B[j] < C[k])
             j++;
         else
             k++;
         }
         // OUR APPROACH IS TO FIND THE SMALLEST NUMBER IF IT EXISTS AND MOVE THE ITERATOR
        
        
         // WE NOW PLACE THE VALUES IN SET BACK INTO OUR V VECTOR
        
         for(auto a: st) {  // tells i to assume values placed in set one by one
            
             v.push_back(a);
         }
   }
   
};
           
           
    // METHOD 2 : FIRST REMOVE ALL DUPLICATES FROM THE GIVEN ARRAYS USING TWO POINTERS AND THEN RUN THE WHILE LP ABOVE;
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
 { 
     
    A[n1]= INT_MIN; // to deal with the case when all are equal
    int i=0,j=0,k=0;    //i denotes any position where we can put a disinct element AND j is used for travesering the array
    while(j<n1) {
        
        if(A[j]!=A[j+1]) {
            A[i]=A[j];   // moves all distinct elements to left side
            i++;
        }
    j++;
        
    
    }
    n1=i;
        
    
    B[n2]= INT_MIN; // to deal with the case when all are equal
    i=0,j=0;        //i denotes any position where we can put a disinct element AND j is used for travesering the array
    while(j<n2) {
        
        if(B[j]!=B[j+1]) {
            B[i]=B[j];   // moves all distinct elements to left side
            i++;
        }
    j++;
        
    
    }
    n2=i;

   C[n3]= INT_MIN; // to deal with the case when all are equal
    i=0,j=0;        //i denotes any position where we can put a disinct element AND j is used for travesering the array
    while(j<n3) {
        
        if(C[j]!=C[j+1]) {
            C[i]=C[j];   // moves all distinct elements to left side
            i++;
        }
    j++;
        
    
    }
    n3=i;


     i=0,j=0,k=0;  // pointers for each of the 3 arrays
         
    while(i<n1 && j<n2 && k<n3) 
    {
        if(A[i] == B[j] && B[j]== C[k])
        {
                 v.push_back(A[i]);
                 i++; j++ ; k++;
        }
        else if(A[i] < B[j])
             i++;
        else if(B[j] < C[k])
             j++;
        else
             k++;
    }

        return v;
           
           
           
    }  
           
           
           
           

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
