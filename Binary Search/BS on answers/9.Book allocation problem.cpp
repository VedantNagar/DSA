/*Given an arra of integer numbers, arr[i] represents the no of pages in the i-th book
There are m students, and task is to allocate all the books to the students.
. Each student must get one book
. Each book should be allocated to only one student.*/

int countStudent(vector<int>& arr, int mid){
    int student=1;
    long long pages=0;
    for(int i=0;i<arr.size();i++){
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student;
}


int findPages(vector<int>& arr, int n, int m) {
    if(m>n){
        return -1;
    }
    int s=*max_element(arr.begin(),arr.end());
    int e=accumulate(arr.begin(),arr.end(),0);
    while(s<=e){
        long long mid=s+(e-s)/2;
        int students = countStudent(arr,mid);
        if(students>m){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s;
}