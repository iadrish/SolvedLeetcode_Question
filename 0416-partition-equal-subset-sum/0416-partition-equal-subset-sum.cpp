class Solution {
public:
    bool subsetsum(int ind, int target, vector<int>&arr, vector<vector<int>>&dp)
    {
        if(target==0)
            return true;
        if(ind==0)
            return arr[0]==target;
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        bool notTaken=subsetsum(ind-1,target,arr,dp);
        
        bool taken=false;
        if(arr[ind]<=target)
            taken=subsetsum(ind-1,target-arr[ind],arr,dp);
        
        return dp[ind][target]=taken||notTaken;
    }
    bool canPartition(vector<int>& nums) {
        int totalsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
            
        }
        if(totalsum%2==1)return false;
        else
        {
            int k=totalsum/2;
            vector<vector<int>>dp(n,vector<int>(k+1,-1));
            return subsetsum(n-1,k,nums,dp);
        }
    }
};