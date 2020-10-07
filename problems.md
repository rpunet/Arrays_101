# **26 - Remove Duplicates from Sorted Array**

([C](C/remove_duplicates.c))

Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
```
Example 1:

Given nums = [1,1,2],
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the returned length.

Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],
Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
It doesn't matter what values are set beyond the returned length.
````
**Clarification:**

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

Internally you can think of this:
```
// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```
# **27 - Remove Element**

([C](C/remove_element.c))

Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
```
Example 1:

Given nums = [3,2,2,3], val = 3,
Your function should return length = 2, with the first two elements of nums being 2.
It doesn't matter what you leave beyond the returned length.

Example 2:

Given nums = [0,1,2,2,3,0,4,2], val = 2,
Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.
Note that the order of those five elements can be arbitrary.
It doesn't matter what values are set beyond the returned length.
```
**Clarification:**

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means modification to the input array will be known to the caller as well.

Internally you can think of this:
```
// nums is passed in by reference. (i.e., without making a copy)
int len = removeElement(nums, val);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```
# **88 - Merge Sorted Array**

([C](C/merge_sorted_array.c))

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

**Note:**

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.
```
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
```
**Constraints:**

- -10^9 <= nums1[i], nums2[i] <= 10^9
- nums1.length == m + n
- nums2.length == n

# **283 - Move Zeroes**

([C](C/move_zeroes.c))

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
```
Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
```
**Note:**

1. You must do this in-place without making a copy of the array.
2. Minimize the total number of operations.

# **485 - Max Consecutive Ones**

([C](C/max_consecutive_ones.c) / [Python 3](Python3/max_consecutive_ones.py))

Given a binary array, find the maximum number of consecutive 1s in this array.
```
Example 1:

Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
```
**Note:**

-The input array will only contain 0 and 1.

-The length of input array is a positive integer and will not exceed 10,000

# **905 - Sort Array By Parity**

([C](C/sort_array_by_parity.c))

Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.
```
Example 1:

Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
``` 
**Note:**

1. 1 <= A.length <= 5000
2. 0 <= A[i] <= 5000

# **941 - Valid Mountain Array**

([C](C/valid_mountain.c))

Given an array A of integers, return true if and only if it is a valid mountain array.

Recall that A is a mountain array if and only if:

- A.length >= 3
- There exists some i with 0 < i < A.length - 1 such that:
  - A[0] < A[1] < ... A[i-1] < A[i]
  - A[i] > A[i+1] > ... > A[A.length - 1]
  
![Alt text](hint_valid_mountain_array%20(1).png)
 
```
Example 1:

Input: [2,1]
Output: false

Example 2:

Input: [3,5,5]
Output: false

Example 3:

Input: [0,3,2,1]
Output: true
``` 
**Note:**
1. 0 <= A.length <= 10000
2. 0 <= A[i] <= 10000 
 
# **977 - Squares of a Sorted Array**

([C](C/sorted_squares.c) / [Python 3](Python3/sorted_squares.py))

Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.
```
Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 ```
**Note:**

1. 1 <= A.length <= 10000
2. -10000 <= A[i] <= 10000
3. A is sorted in non-decreasing order.

# **1089 - Duplicate Zeros**

([C](C/duplicate_zeros.c))

Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.

Do the above modifications to the input array in place, do not return anything from your function.
```
Example 1:

Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2:

Input: [1,2,3]
Output: null
Explanation: After calling your function, the input array is modified to: [1,2,3]
 ```
**Note:**
1. 1 <= arr.length <= 10000
2. 0 <= arr[i] <= 9


# **1295 - Find Numbers with Even Number of Digits**

([C](C/find_number_even_digits.c) / [Python 3](Python3/find_number_even_digits.py))

Given an array nums of integers, return how many of them contain an even number of digits.
 ```
Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
 ```
**Constraints:**
- 1 <= nums.length <= 500
- 1 <= nums[i] <= 10^5

# **1299 - Replace Elements with Greatest Element on Right Side**

([C](C/replace_elemens.c))

Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.
```
Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
``` 
**Constraints:**

- 1 <= arr.length <= 10^4
- 1 <= arr[i] <= 1

# **1346 - Check If N and its Double Exist**

([C](C/check_if_exist.c))

Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

- i != j
- 0 <= i, j < arr.length
- arr[i] == 2 * arr[j]
```
Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.

Example 2:

Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.

Example 3:

Input: arr = [3,1,7,11]
Output: false
Explanation: In this case does not exist N and M, such that N = 2 * M.
 ```
**Constraints:**
- 2 <= arr.length <= 500
- -10^3 <= arr[i] <= 10^3
