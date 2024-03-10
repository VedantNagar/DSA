class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i=0; i<n-1;i++) {
            if (nums[i]>nums[i+1]) {
                count++; //counts anomalies
            }
        }
        if (nums[0]<nums[n-1]) {//checking last element with first element
            count++;
        }
        return count<=1; //if more than 1, it means not rotated and sorted
    }
};
