// Time Complexity: O(n log n).
// Auxiliary Space: O(n)
// Using STL

// GFG version

// QUESTION:
// The array of size n (INDEX_MAX = n-1) can have members belonging to [0,n-1]. The digits in the array can belong only to this range.
// Any of the digits that can be placed in the array may be repeating.
// The repeating digit may repeat twice, thrice, as many times.
// We need to find all such repeating digits and store them in a vector and return it. If no digit repeats return -1 in vector.

// Solution: 
// >Create a new vector and place -1 in it.
// >Sort the orginal array
// >If at any index and the next index, the digits are same, and that digit is not the last one to be stored in our vector, then we push that digit in our vector.
// > At last we check that if last entry in our vector is not -1 it means we have a repeating digit, thus we need to remove the -1, hence we erase the first element in the vector.



// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n)


vector<int> duplicates(int arr[], int n) {
    sort(arr,arr+n);

    vector<int> v;
    v.push_back(-1);

    for(int i=0;i<n;i++) {

        if(arr[i]!=v.back() && arr[i]==arr[i+1])
            v.push_back(arr[i]);
    }

    if(v.back()!=-1)
        v.erase(v.begin());

    return v;
}



