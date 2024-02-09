/* Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram */

class Solution {
public:

    vector<int>nextSmaller(vector<int>& arr, int n) {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);

        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()]>= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }   

    vector<int>prevSmaller(vector<int>& arr, int n) {
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);

    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top()!= -1 && arr[s.top()]>= curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
        }
        return ans;
    }   

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int>next(n);
        next = nextSmaller(heights,n);

        vector<int>prev(n);
        prev = prevSmaller(heights,n);
        int area = 0;
        for(int i=0;i<n;i++){
            int length = heights[i];
            if(next[i] == -1){
                next[i]=n;
            }
            int breadth = next[i]-prev[i]-1;
            int thisArea = length*breadth;
            area = max(area,thisArea);
        }
        return area;
    }
};