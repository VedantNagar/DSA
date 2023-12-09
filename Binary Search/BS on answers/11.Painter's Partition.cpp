/*Given an array of length n, where the array represents the boards & each element represents length of each board.*/

int findPainters(vector<int> &boards, int mid){
    int numberPainters=1;
    long long boardSum=0;
    for(int i=0;i<boards.size();i++){
        if(boardSum+boards[i]<=mid){
            boardSum+=boards[i];
        }
        else{
            numberPainters++;
            boardSum=boards[i];
        }
    }
    return numberPainters;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=*max_element(boards.begin(),boards.end());
    int e=accumulate(boards.begin(),boards.end(),0);
    while(s<=e){
        long long mid=s+(e-s)/2;
        int numberPainters=findPainters(boards,mid);
        if(numberPainters<=k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
}