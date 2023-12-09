class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int other_num=target-num;
            if(ans.find(other_num)!=ans.end()){
                return {ans[other_num],i};
            }
            ans[num]=i;
        }
        return{-1,-1};
    }
};