class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool isRotated = false;
        for (int i=0; i<n-1;i++) {
            if (nums[i]>nums[i+1]) {
                if (isRotated) {
                    return false;
                }
                isRotated = true;
            }
        }
        if (isRotated && nums[0]<nums[n-1]) {
            return false;
        }
        return true;
    }
};

