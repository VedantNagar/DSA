/*Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.*/

class Solution {
public:

    int checkPartition(vector<int>&nums, int mid){
        int partition=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                partition++;
                sum=nums[i];
            }
        }
        return partition;
    }

    int splitArray(vector<int>& nums, int k) {
        int s= *max_element(nums.begin(),nums.end());
        int e= accumulate(nums.begin(),nums.end(),0);
        while(s<=e){
            int mid=s+(e-s)/2;
            int partition = checkPartition(nums,mid);
            if(partition>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
};