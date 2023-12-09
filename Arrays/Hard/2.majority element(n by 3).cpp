class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cn1=0;
        int cn2=0;
        int el1=-1;
        int el2=-1;
        for(int i=0;i<nums.size();i++){
            if(cn1==0 && nums[i]!=el2){
                cn1=1;
                el1=nums[i];
            }
            else if(cn2==0 && el1!=nums[i]){
                cn2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1){
                cn1++;
            }
            else if(nums[i]==el2){
                cn2++;
            }
            else{
                cn1--;
                cn2--;
            }
        }
        vector<int>ans;
        int min = (int)(nums.size()/3) + 1;
/*      // Manually check if the stored elements in
        // el1 and el2 are the majority elements:  */
        cn1 = 0, cn2 = 0;
        for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == el1) cn1++;
        if (nums[i] == el2) cn2++;
        }  
        if(cn1 >= min) ans.push_back(el1);
        if(cn2 >= min) ans.push_back(el2);
        if(el1==el2){
            return {el1};
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};