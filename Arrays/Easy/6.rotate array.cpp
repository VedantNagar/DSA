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