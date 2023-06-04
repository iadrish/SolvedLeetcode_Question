class Solution {
public:
    int f(int ind, vector<int> &arr,vector<int>&dp)
    {
        if(ind<0)return 0;
        
        if(ind==0) return arr[ind];
        
        if(dp[ind]!=-1) return dp[ind];
        
        int pick= arr[ind]+ f(ind-2,arr,dp);
        
        int notpick= 0 + f(ind-1,arr,dp);
        
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
     int n=nums.size();
        if(n==1){return nums[0];}
        vector<int>v1(nums.begin(), nums.begin()+nums.size()-1), v2(nums.begin()+1, nums.end());
        vector<int>dp1(n-1, -1), dp2(n-1, -1);
        return max(f(n-2, v1, dp1), f(n-2, v2, dp2));
    }
};