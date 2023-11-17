class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>s;
        vector<int>vec=prices;
        int n=prices.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty())
            {
                if(prices[i]>=s.top())
                {                   
                  vec[i]=prices[i]-s.top();
                    break;
                }
            else
            {
                s.pop();
            }
        }
            s.push(prices[i]);
            
      }
        return vec;
    }
};