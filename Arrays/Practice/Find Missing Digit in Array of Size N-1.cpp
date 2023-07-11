/* IF ARRAY IS OF SIZE N-1 having digits ranging from 1 TO N => the missing digit is not present in the array, so you need to find it.

E.G's 
2      5          5
1     1 2 3 4    1 4 3 2   
We first sort and swap the digits present in to their indexes.
Corner case is when the digit is n itself, we cannot access a[n] as it will be out of bound. In this case we ++i so that it maps to the index-1 which is the missing digit. Then we return the index
Then we check for mapping between digits and their index, if not found we return the index AND NOT THE DIGITS to ensure the corner case also runs.
*/

class Solution{
  public:
  int missingNumber(vector<int>& array, int n) {
        int i=0;
        while(i<n-1) {
            int index=array[i] - 1;
            
            if(array[i]!=n && array[i]!=array[index])
                swap(array[i],array[index]);
            else
                i++;
        }
        
        for(int i =0 ; i<n-1;i++)
        {
            if(array[i]!=i+1)
                return i+1;
        }
    
    return n;
    }
    
    
/*

VARIATIONS:

IF ARRAY IS OF SIZE N HAVING digits ranging from 1 to N where 1 digit is missing and one digit is repeated.
WE can follow the above appraoch in a modified way.

2ND METHOD:
VISITING THE INDEXES AND MARK THEM NEGATIVE
NEXT RUN A LOOP to search for positive elements and return the corresponding index.

THE VISITING METHOD METHOD WORKS
1. WHEN DIGITS VARY FROM 1 TO N-1 AND THE SIZE IS N;
2.  OR WHEN THEY VARY FROM 1 TO N AND SIZE IS N

#### IT WILL NOT WORK WHEN DIGITS VARY FROM 1 TO N AND SIZE IS N-1 AS IN THE 1ST VARIATION. #####

*/
