int floorSqrt(int n)
{
    int s=0,e=n;
    int ans=-1;
    while(s<=e){
        for(int i=1;i*i<n;i++){
            long long mid=s+(e-s)/2;
            if(mid*mid<=n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
}