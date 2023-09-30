bool isPrime(int n)
{
	if(n==0||n==1){
        return false;
    }
    int count=0;
    for(int i=1;i*i<=n;i++){//if a number i is a divisor of n and i is greater than the square root of n, then its corresponding divisor n/i must be smaller than the square root of n
        if(n%i==0){
            count++;
            if((n/i)!=i){//The condition (n / i) != i is used to ensure that you only count one of these divisors. If n is not a perfect square, this condition will always be true because the divisors will be distinct. However, for perfect square numbers, it prevents counting the square root divisor twice.
                count++;
            }
        }
    }
    if (count==2){
        return true;
    }
    else{
        return false;
    }
}