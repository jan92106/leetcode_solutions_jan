// Last updated: 7/24/2026, 2:05:23 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int totalprofit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                totalprofit += prices[i]-prices[i-1];
            }
        }
        return totalprofit;
    }
};