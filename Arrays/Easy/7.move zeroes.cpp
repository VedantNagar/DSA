/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;  
        for (int i=0; i<nums.size();i++) {
            if (nums[i]!=0) {
                if (i!=s) {
                    swap(nums[i], nums[s]);
                }
                s++;
            }
        }
    }
};

/* 
Initialization:

It initializes a variable s to zero, which will keep track of the position to swap non-zero elements.

Iteration through Vector:

It uses a for loop to iterate through the elements of the vector nums.

Moving Zeroes:

If the current element is non-zero (nums[i] != 0), it proceeds to the next step.
If the current index i is not equal to s, it indicates that a non-zero element needs to be moved to a position where a zero is currently present.
It swaps the non-zero element at index i with the element at the current position s.

Incrementing Position:

It increments the position s to the next available position for swapping.
 */