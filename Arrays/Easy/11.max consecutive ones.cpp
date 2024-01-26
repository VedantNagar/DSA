//Given a binary array nums, return the maximum number of consecutive 1's in the array.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        return max(ans,count);
    }
};

/* 
Initialization:

It initializes two variables, ans and count, to zero.
ans is used to keep track of the maximum consecutive ones encountered.
count is used to count the consecutive ones in the current sequence.

Iterating through the Array:

It uses a for loop to iterate through the elements of the vector nums.

Counting Consecutive Ones:

If the current element is 1 (nums[i] == 1), it increments the count to track consecutive ones.
If the current element is 0, it means the consecutive sequence of ones is interrupted. It updates the maximum count (ans) and resets the count to zero.

Updating Maximum Count:

After the loop, it updates the maximum count (ans) again, considering the last sequence of ones.
This is necessary in case the array ends with a consecutive sequence of ones.

Return Statement:

The function returns the overall maximum consecutive ones encountered (max(ans, count)).
 */