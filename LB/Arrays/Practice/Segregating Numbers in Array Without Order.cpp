//  Time complexity: O(N) 
//  Auxiliary Space: O(1)

// DUTCH NATIONAL FLAG PROBLEM

// Segregates numbers in an array in DESCENDING fasion WITHOUT ORDER.

void segregateElements(int arr[],int n)
{
    int low=n-1, high =0;

    while(high<low) {
     
        if(arr[high]>0)
            high++;          //cases which require no swapping only movement of pointers
        else if(arr[low]<0)
            low--;          //cases which require no swapping only movement of pointers
       
        else 
            swap(arr[low],arr[high]);      // requires swap of numbers


    }
}




// Segregates numbers in an array in ASCENDING fasion WITHOUT ORDER.

void segregateElements(int arr[],int n)
{
    int low=0, high =n-1;

    while(low<high) {
     
        if(arr[high]>0)
            high--;          //cases which require no swapping only movement of pointers
        else if(arr[low]<0)
            low++;          //cases which require no swapping only movement of pointers
       
        else 
            swap(arr[low],arr[high]);      // requires swap of numbers


    }
}
