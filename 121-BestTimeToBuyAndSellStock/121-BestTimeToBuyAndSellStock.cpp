// Last updated: 7/24/2026, 2:05:24 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
            minprice= min(minprice,prices[i]);
            int currentprofit= prices[i]- minprice;
            maxprofit=max(maxprofit,currentprofit);
        }
        return maxprofit;
    }
};