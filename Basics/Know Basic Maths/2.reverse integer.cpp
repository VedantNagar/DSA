/* Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. */

class Solution {
public:
    int reverse(int x){
        int ans=0;
        while (x!=0){
            int digit=x%10; //extracting the last digit
            if(ans>INT_MAX/10 || ans<INT_MIN/10){//checking if the number is out of bounds
                return 0;
            }
            /*If the number is within bounds, the code proceeds to reverse x. It does this by shifting the existing digits of ans one place to the left (multiplying it by 10) and then adding the extracted digit. This effectively builds the reversed number.*/
            ans=(ans*10) + digit;
            x=x/10;//removing the last digit
        }
        return ans;
    }
};