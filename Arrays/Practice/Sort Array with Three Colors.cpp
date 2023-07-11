```
// This code sorts an array of integers with three different colors represented by values 0, 1, 2.
// It uses three pointers: low, mid, high. low and mid are initialized to 0, and high is initialized to size-1.
// The main loop continues until all elements have been processed.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
```
