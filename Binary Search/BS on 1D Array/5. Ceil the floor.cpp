/* You're given a sorted array 'a' of 'n' integers and an integer 'x'.

Find the floor and ceiling of 'x' in 'a[0..n-1]'.

Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'. */
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