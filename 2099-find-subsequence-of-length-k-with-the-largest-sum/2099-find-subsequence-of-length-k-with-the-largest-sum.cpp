class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
         if(nums.size()==k) return nums;
        priority_queue<pair<int,int>>q;
        int n=nums.size();
        for(int i=0;i<n;i++) q.push({nums[i],i});
        vector<pair<int,int>>v;
        while(k--){
            v.push_back({q.top().second,q.top().first});
            q.pop();
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto x:v) ans.push_back(x.second);
        return ans;
    }
};