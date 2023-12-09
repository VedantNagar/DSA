int findKRotation(vector<int> &arr){
   int s=0,e=arr.size()-1;
   while(s<e){
       int mid = s+(e-s)/2;
       if(arr[mid]>=arr[0]){
           s=mid+1;
       }
       else{
           e=mid;
       }
   } 
   if(arr[e]>arr[e-1]&&arr[e]>arr[0]){
       return 0;
   }
   return e;
}