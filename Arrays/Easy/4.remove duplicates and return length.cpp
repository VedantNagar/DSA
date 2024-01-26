class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
/* 
Iteration through Vector:

A for loop is used to iterate through the elements of the vector nums starting from the second element (index 1).

Removing Duplicates:

It compares the current element (nums[i]) with the element at the position k-1.
If the current element is different from the element at position k-1 (nums[i] != nums[k-1]), it implies a new element.
It updates the element at position k to be the current element (nums[k] = nums[i]), and increments k.

Counting Unique Elements:

The variable k keeps track of the count of unique elements encountered.

Return Statement:

The function returns the value of k after the loop.
This value represents the count of unique elements, and the modified vector nums now contains these unique elements in the first k positions.
 */