int floor(vector<int> &a, int n, int x){
    int s=0;
    int e=n-1;
    int flr=-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]<=x){
            flr=a[mid];
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return flr;
}

int ceiling(vector<int> &a, int n, int x){
    int s=0;
    int e=n-1;
    int ceil=-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]>=x){
            ceil=a[mid];
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ceil;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int f=floor(a,  n,  x);
    int c=ceiling(a,  n,  x);
    return {f,c};
}