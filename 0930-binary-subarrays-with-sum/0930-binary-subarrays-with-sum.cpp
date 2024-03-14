class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int x=nums.size();
        
        int count=0;
        unordered_map<int,int> prevSum;
        int sum=0;
        for(int i=0;i<x;i++)
        {
           sum+=nums[i];
            
            if(sum==goal)
                count++;
            
            if(prevSum.find(sum-goal)!=prevSum.end())
            {
                count+=prevSum[sum-goal];
            }
            
            prevSum[sum]++;
        }
        
        return count;
    }
};