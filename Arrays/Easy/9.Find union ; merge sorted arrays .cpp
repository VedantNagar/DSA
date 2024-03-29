vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    int size1=a.size();
    int size2=b.size();
    vector<int>ans;
    while(i<size1 && j<size2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){//to avoid duplicacy
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){//to avoid duplicacy
            ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<size1){ //if b is over, then push a values in the ans
        if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
            i++;
    }
    while(j<size2){//if a is over, then push b values in the ans
        if(ans.size()==0 || ans.back()!=b[j]){
           ans.push_back(b[j]);
        }
            j++;
    }
    return ans;
}
