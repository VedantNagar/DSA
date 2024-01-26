/* Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space. */

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans="";
        int i=0;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            int j=i+1;
            while(s[j]!=' ' && j<n && i<n){
                j++;
            }
            string word = s.substr(i,j-i);
            if(ans.size()==0){
                ans=word;
            }
            else{
                ans = word + ' ' + ans;
            }
            i=j+1;
        }
        return ans;
    }
};