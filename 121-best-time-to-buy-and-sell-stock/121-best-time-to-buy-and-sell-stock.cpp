class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_prices=INT_MAX; // minimum price till now
        int profit=0;
        
        for(int i=0; i<prices.size(); i++) // going on each day
        {
            min_prices=min(prices[i],min_prices);
            profit=max(profit,prices[i]-min_prices);
        }
        return profit;
    }
};