/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //shifting all non zero value to left in relative order
        int nonZero = 0;  
        for (int i=0; i<nums.size();i++) {
            if (nums[i]!=0) {
                if (i!=s) {//swap non zero value to correct place
                    swap(nums[i], nums[nonZero]);
                }
                nonZero++;
            }
        }
    }
};
