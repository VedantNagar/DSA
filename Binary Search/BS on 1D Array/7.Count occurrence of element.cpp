int firstOccurence(vector<int>& arr, int n, int x){
	int s=0;
	int e=n-1;
	int first=-1;
	while(s<=e){
		int mid = s+(e-s)/2;
		if(arr[mid]==x){
			first=mid;
			e=mid-1;
		}
		else if(arr[mid]<x){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return first;
}


int lastOccurence(vector<int>& arr, int n, int x){
	int s=0;
	int e=n-1;
	int last=-1;
	while(s<=e){
		int mid = s+(e-s)/2;
		if(arr[mid]==x){
			last=mid;
			s=mid+1;
		}
		else if(arr[mid]>x){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return last;
}


int count(vector<int>& arr, int n, int x) {
	int first=firstOccurence(arr,  n,  x);
	int last=lastOccurence(arr,  n,  x);
	if(first==-1 || last ==-1){
		return 0;
	}
	else{
		return (int)((last-first)+1);
	}
}
