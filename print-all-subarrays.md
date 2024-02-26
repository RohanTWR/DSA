---
layout:
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# Print All Subarrays

{% hint style="info" %}
<mark style="color:blue;">**Pattern/Approach:**</mark> Recursion\
<mark style="color:blue;">**Topic:**</mark> Arrays+ Recursion\
<mark style="color:blue;">**Difficulty:**</mark> Easy\
<mark style="color:blue;">**Compexity:**</mark> T.C.: O(n^2) ; S.C.: O(n+2) ;
{% endhint %}



***

## Analysis

<details>

<summary>Analysis - Recursion</summary>

* Intuitive, check the code

</details>

<details>

<summary>Analysis - Optimized Approach</summary>















</details>

## Takeaways

<details>

<summary>Takeaways - Recursion</summary>

1. Base case is encountered when end reaches out of bound, that is == size of the array
2. Common mistake : is when base case is taken equal to size -1;

</details>

<details>

<summary>Takeaways - Optimized approach</summary>



</details>

## Code

{% tabs %}
{% tab title="Recursion" %}
{% code overflow="wrap" lineNumbers="true" %}
```cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubArrayUtil(vector<int> &nums, int start, int end) {
	//base case
	//that is when end goes out of bound
	if(end == nums.size())
		return;

	//one case solution
	//loop to print from start to end
	for(int i=start;i<=end;i++) {
		cout<<nums[i]<<" ";
	}
	cout<<endl;

	//now keep increasing end by recursively calling
	printSubArrayUtil(nums, start, end+1);
}

void printSubArray(vector<int> &nums) {
	for(int start =0 ; start < nums.size() ; start++) {
		int end = start; 
		// for the first case, rest will be handled by utility
		printSubArrayUtil(nums,start,end);
	}
}

int main() {
	
	vector<int> nums {1,2,3,4,5};
	printSubArray(nums);
	return 0;
}
```
{% endcode %}
{% endtab %}

{% tab title="Optimized approach" %}
```
// Some code
```
{% endtab %}
{% endtabs %}
