class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minval=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>minval)
            profit=max(profit,prices[i]-minval);
            minval=min(minval,prices[i]);
        }
        return profit;
    }
};