class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]!=i+1 && nums[i]>0 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        
        int ind=0;
        while(ind<nums.size() && nums[ind]==ind+1) ind++;
         return ind+1;
    }
};