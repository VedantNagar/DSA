/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively */


//Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0; int mid=0; int e=nums.size()-1;
        while(mid<=e){
            if(nums[mid]==0){
                swap(nums[s],nums[mid]);
                s++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[e]);
                e--;
            }
        } 
    }
};