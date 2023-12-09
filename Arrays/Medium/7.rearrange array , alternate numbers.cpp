/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);//In this particular problem, initializing the result vector with zeros ensures that all positions in the vector are valid, and it simplifies the logic of placing positive and negative numbers at even and odd indices, respectively. It's a common approach to initialize a vector to a default value when you want to modify specific positions within it later.
        int posNumber=0; 
        int negNumber=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[posNumber]=nums[i];
                posNumber+=2;
            }
            else{
                ans[negNumber]=nums[i];
                negNumber+=2;
            }
        }
        return ans;
    }
};

//second, where no of positive may not be equal to number of negative

vector<int> alternateNumbers(vector<int>&a) {
   vector<int>positive;
   vector<int>negative;
   for(int i=0;i<a.size();i++){
       if(a[i]>=0){
           positive.push_back(a[i]);
           }
           else
           negative.push_back(a[i]);
           }
        vector<int>final;
        int i=0;
        int j=0;
        while(i<positive.size()&& j<negative.size()){
            final.push_back(positive[i++]);
            final.push_back(negative[j++]);
        }
        while (i < positive.size()) {
        final.push_back(positive[i++]);
        }
        while (j < negative.size()) {
        final.push_back(negative[j++]);
    }
    return final;
}