#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp =arr[0];
    for(int i=1;i<n;i++){ //shifting elements (except the first) one side left
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
/* 
Temporary Storage:

It initializes a temporary variable temp to store the first element of the array arr.

Shifting Elements:

It uses a for loop to iterate through the array arr starting from the second element (index 1).
Each element is shifted to the left by assigning the value of the next element to the current one (arr[i-1] = arr[i]).

Rotating the Array:

After the loop, it assigns the value of the temporary variable temp to the last element of the array (arr[n-1] = temp), effectively rotating the array by one position to the left.

Return Statement:

The function returns the modified array arr.
 */