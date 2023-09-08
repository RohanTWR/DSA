#include <bits/stdc++.h> 
using namespace std; 

/*
o(r*c)
O(r*c) for returning answer only.

Input:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.

The importance of count< total and not using = is important. The while loop should only continue if count<total.

*/

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector <int> v;
        int total = r*c;
        int count =0;
        int i=0;
        
        
        int startRow=0;
        int endCol=c-1;
        int endRow=r-1;
        int startCol=0;
        
        
        while(count < total)
        {
            //Printing the first row
            // we need to check after every pushback whether we have exceeded the total elements or not
            for(i=startCol;i<=endCol && count<total;i++)
            {
                v.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++; // imp for spiral flow and to avoid repeatition
            
            
            //Printing the last col
            for(i=startRow;i<=endRow && count<total;i++)
            {
                v.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //Print the last row
            for(i=endCol;i>=startCol && count<total;i--)
            {
                v.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            //Printing the first col to complete the spiral
            for(i=endRow;i>=startRow && count<total;i--)
            {
                v.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
    
    return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
//