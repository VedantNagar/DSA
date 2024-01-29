/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "". */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        //traversing taking first input as the base
        for(int i=0;i<strs[0].length();i++){
            char alphabet = strs[0][i];

            bool same = true;

            //comparing alphabet with rest of the input strings
            for(int j=1;j<strs.size();j++){
                //string do not match
                if(strs[j].size()<i || alphabet!=strs[j][i]){
                    same=false;
                    break;
                }
            }
            if(same==false){
                break;
            }
            else{
                ans.push_back(alphabet);
            }
        }
        return ans;
    }
};