/* You are given a number n
Find the number of digits of n that evenly divide n
 */

int countDigits(int n){
    int count =0;
    int number = n;
	if(n==0){
        return 0;
    }
    while(n>0) {
    int digit = n % 10; // Extract the last digit

    // Check if the digit is not zero and divides n without remainder
    if(digit!= 0 && number % digit == 0) {
         count++;
        }

        n/=10; // Remove the last digit
    }

    return count;
}