/* You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists. */

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1; i>=0;i--){
            if((num[i]-'0')%2!=0){
                break;
            }
            else{
                num.pop_back();
            }
        }
        return num;
    }
};