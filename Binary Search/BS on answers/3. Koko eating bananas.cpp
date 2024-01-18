/* Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours. */

class Solution {
public:

    int findMax(vector<int> &piles) {
    int maxPile = -1;
    for (int i=0;i<piles.size();i++) {
        maxPile = max(maxPile, piles[i]);
    }
    return maxPile;
}

    double totalHours(vector<int>&piles,int h){
        double hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=ceil((double)(piles[i])/(double)(h));
        }
        return hours;
    }

    double minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=findMax(piles);
        while(s<=e){
            double mid=s+(e-s)/2;
            double timeTaken=totalHours(piles,mid);
            if(timeTaken<=h){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};