//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (k%n == 0 || n == 0) {
            return; // No rotation needed
        }
        k=k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

/* 
Check for No Rotation Needed:

It checks if the rotation count k is a multiple of the array size n or if the array is empty (k % n == 0 || n == 0).
If true, it means no rotation is needed, so the function returns early.

Adjust Rotation Count:

It updates the rotation count to the remainder when divided by the array size (k = k % n).
This adjustment ensures that unnecessary rotations are avoided.

Array Reversal for Rotation:

It uses the reverse function to reverse the entire array (reverse(nums.begin(), nums.end())).
Then, it reverses the first k elements of the array (reverse(nums.begin(), nums.begin() + k)).
Finally, it reverses the remaining elements in the array (reverse(nums.begin() + k, nums.end())).
This sequence of reversals effectively rotates the array to the right by k positions.
 */