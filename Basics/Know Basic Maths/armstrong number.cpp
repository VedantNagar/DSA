bool checkArmstrong(int n){
	int number = n;
	int digitCount=0;
	int sum = 0;
	while(n!=0){
		n/=10; // Remove the last digit of n by dividing it by 10.
		digitCount++;  // Increment the digit count.
	}
	n= number;
	while(n!=0){
		int digit = n%10;  // Extract the last digit of n.
		sum+=pow(digit,digitCount);  // Add the nth power of the digit to the sum.
		n/=10;  // Remove the last digit of n.
	}
	return sum == number;
}
