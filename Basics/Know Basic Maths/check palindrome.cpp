class Solution {
public:

int findReverse(int x){
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if (x<0){
            return false;
        }
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            break;
        }
        ans=(ans*10) + digit;
        x=x/10;
    }
    return ans;
}

    bool isPalindrome(int x) {
        
        int reversed= findReverse(x);
        if(x==reversed){
            return true;
        }
        else{
            return false;
        }
    }
};