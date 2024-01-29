/* A string is a valid parentheses string (denoted VPS) if it meets one of the following:

Given a VPS represented as string s, return the nesting depth of s.

 */

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, cur=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                cur++;
                ans= max(ans,cur);
            }
            else if(s[i]==')'){
                cur--;
            }
        }
        return ans;
    }
};