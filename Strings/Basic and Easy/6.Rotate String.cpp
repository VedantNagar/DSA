class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size()!=goal.size()){
            return false;
        }
        return 
        (s+s).find(goal)!=string::npos;
        /* When find function is unable to find the specified substring or character within the target string, it returns std::string::npos to signal that the search was unsuccessful */
    }
         if(s.size()!=goal.size()){
            return false;
        }
        queue<char>q1,q2;

        for(int i=0;i<s.size();i++){
            q1.push(s[i]);
        }
        for(int j=0;j<goal.size();j++){
            q2.push(goal[j]);
        }
        for(int k=goal.size();k>0;k--){
            char ans = q2.front();
            q2.pop();
            q2.push(ans);

            if(q1==q2){
                return true;
                break;
            }
        }
        return false;
    } 
};