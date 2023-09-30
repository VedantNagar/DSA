class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long expectedSum = (n*(n+1))/2;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return expectedSum - sum;
    }
};