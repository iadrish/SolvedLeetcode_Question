class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        for(int  i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                result.push_back(i);
            
        }
        
        int x=result.size();
        if(x==0)
        {
            result.push_back(-1);
            result.push_back(-1);
        }
        int p=result.size();
        return {result[0],result[p-1]};
    }
};