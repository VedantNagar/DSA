class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if(element==nums[i]){
                count++;
            }
            else{
                count--;
            }
//to check if it is indeed the majority element or not 

/*  int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}*/

        }
        return element;
    }
};