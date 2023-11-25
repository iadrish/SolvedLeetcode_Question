class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
       
        int totalSum=0, n=nums.size(), leftSum=0;
        for(auto el:nums)
            totalSum +=el;
        
        vector<int>ans;
            
        for(int i=0;i<n;i++)
        {
            int valleft=(nums[i]*i)-leftSum;
            int valright=(totalSum-leftSum- nums[i]*(n-i));
            leftSum+=nums[i];
            
            
            ans.push_back(valleft+valright);
        }
            
       return ans;  
    }
};