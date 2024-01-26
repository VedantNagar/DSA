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

/* 
Iteration through Vector:

The code uses a for loop to iterate through the elements of the vector nums.
It compares each element with its next one.

Detecting Rotation:

If an element is greater than its next element (nums[i] > nums[i+1]), it indicates a potential rotation point.
It sets a boolean flag (isRotated) to true upon detecting a decreasing trend.

Ensuring Single Rotation:

If a rotation is detected (isRotated is true), it checks if another rotation occurs.
If true, it returns false, indicating more than one rotation.

Final Validation:

After the loop, it checks if the array is indeed rotated by confirming that the first element is less than the last one (nums[0] < nums[n-1]).
If this condition holds true, it returns false as it violates the properties of a valid rotation.

Return Statement:

If no issues are found during the iteration and rotation checks, the function returns true, indicating that the array is a valid rotated version of a sorted array.
 */