/* The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            
        }
        else{
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[index],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
        }
    }
};