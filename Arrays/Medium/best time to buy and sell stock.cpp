class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            bestPrice=min(bestPrice, prices[i]);
            maxProfit=max(maxProfit, prices[i]-bestPrice);
        }
        return maxProfit;
    }
};