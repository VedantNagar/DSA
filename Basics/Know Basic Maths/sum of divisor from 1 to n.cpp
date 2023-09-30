int sumOfAllDivisors(int n) {
	int sum = 0;
	for(int i=1;i<=n;i++){
		int divisorSum = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				divisorSum+=j;
			}
		}
		sum+=divisorSum;
	}
	return sum;
}