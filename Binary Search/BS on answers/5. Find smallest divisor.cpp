/* Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5). */

class Solution {
public:

    int findMax(vector<int>&nums) {
    int maxNumber = -1;
    for (int i=0;i<nums.size();i++) {
        maxNumber = max(maxNumber, nums[i]);
    }
    return maxNumber;
}

    double summation(vector<int>& nums, int mid){
        double sum=0;
        for(int i =0;i<nums.size();i++){
            sum+=ceil((double)(nums[i])/(double)(mid));
        }
        return sum;
    }

    double smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=findMax(nums);
        double ans=0;
        while(s<=e){
            double mid=s+(e-s)/2;
            if(summation(nums,mid)<=threshold){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};