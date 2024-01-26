vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    int size1=a.size();
    int size2=b.size();
    vector<int>ans;
    while(i<size1 && j<size2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
            ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<size1){
        if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
            i++;
    }
    while(j<size2){
        if(ans.size()==0 || ans.back()!=b[j]){
           ans.push_back(b[j]);
        }
            j++;
    }
    return ans;
}

/* 
Initialization:

It initializes two pointers, i and j, to zero for vectors a and b respectively.
It also initializes the sizes of vectors a and b to size1 and size2 respectively.
A vector ans is initialized to store the sorted merged result.

Merging Sorted Arrays:

It uses a while loop to iterate through both vectors until either of them is exhausted.
Within the loop, it compares the elements at the current positions a[i] and b[j].
If a[i] is less than or equal to b[j], it adds a[i] to the result vector ans, but only if it's the first element or different from the last element in ans. Then, it increments i.
If b[j] is less than a[i], it adds b[j] to the result vector ans, but only if it's the first element or different from the last element in ans. Then, it increments j.

Handling Remaining Elements:

After the loop, it checks if there are any remaining elements in vectors a and b.
If there are remaining elements in a, it adds them to the result vector ans in a similar manner.
If there are remaining elements in b, it adds them to the result vector ans in a similar manner.

Return Statement:

The function returns the sorted and merged vector ans.
 */