/* You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once. */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[e]!=nums[e-1]){
            return nums[e];
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if((mid%2==1&&nums[mid]==nums[mid-1]) ||                     (mid%2==0&& nums[mid]==nums[mid+1])){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
};