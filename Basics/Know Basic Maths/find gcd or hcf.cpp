/*This is done using Euclidean algorithm.This algorithm is efficient for calculating the GCD because it reduces the problem by repeatedly taking remainders until a GCD is found.*/

/*In this code:

We use a while loop that continues until n becomes 0.
In each iteration, we calculate the remainder of m divided by n, and store it in n.
We swap the values of n and m so that n is always the smaller number.
When n becomes 0, m will hold the GCD, and we return it.*/

int calcGCD(int n, int m){
  while (n != 0) {
    int temp = n;
    n = m % n;
    m = temp;
  }
  return m;
}