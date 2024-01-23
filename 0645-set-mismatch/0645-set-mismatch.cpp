class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int>ans;
        unordered_set<int>s;
        int sum=0;
        
        for(auto x:nums)
        {
            if(s.find(x)!=s.end())
            {
                ans.push_back(x);
            }
            else
            {
                s.insert(x);
                sum+=x;
            }
        }
        int n=nums.size();
        int t=n*(n+1)/2;
        ans.push_back(t-sum);
        
        return ans;
        

    }
};