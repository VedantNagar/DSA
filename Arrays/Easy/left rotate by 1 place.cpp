#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp =arr[0];
    for(int i=1;i<n;i++){ //shifting elements (except the first) one side left
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
