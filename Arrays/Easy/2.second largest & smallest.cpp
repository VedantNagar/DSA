int secondLargest(vector<int>&a,int n){
    int largest=a[0];
    int slargest = INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}
int secondSmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i =0;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n,vector<int>a) {
    int slargest= secondLargest(a,n);
    int ssmallest= secondSmallest(a,n);
    return {slargest, ssmallest};
}
/* 
Finding Second Largest:

The function secondLargest takes an array a and its size n.
It initializes variables largest and slargest to the first element and negative infinity, respectively.
It iterates through the array, updating largest and slargest based on the values encountered.
If the current element is greater than the current largest (a[i] > largest), it updates slargest to the current largest and updates largest to the current element.
If the current element is not the largest but greater than the second-largest (a[i] < largest && a[i] > slargest), it updates slargest to the current element.
The function returns the second-largest element.

Finding Second Smallest:

The function secondSmallest takes an array a and its size n.
It initializes variables smallest and ssmallest to the first element and positive infinity, respectively.
It iterates through the array, updating smallest and ssmallest based on the values encountered.
If the current element is less than the current smallest (a[i] < smallest), it updates ssmallest to the current smallest and updates smallest to the current element.
If the current element is not equal to the smallest but less than the second-smallest (a[i] != smallest && a[i] < ssmallest), it updates ssmallest to the current element.
The function returns the second-smallest element.

Combining Results:

The function getSecondOrderElements takes the array size n and the array a.
It calls the secondLargest and secondSmallest functions to get the second-largest and second-smallest elements.
It returns a vector containing these two elements.
 */