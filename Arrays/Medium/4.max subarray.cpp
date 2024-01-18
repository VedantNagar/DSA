/*Given an integer array nums, find the 
subarray with the largest sum, and return its sum.*/


//Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxSum=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxSum){
                maxSum=sum;
            }
             // If sum < 0: discard the sum calculated
            if(sum<0){
                sum=0;
            }
        }    
        if(maxSum<=0){
        maxSum=0;
    }
        return maxSum;
    }
};