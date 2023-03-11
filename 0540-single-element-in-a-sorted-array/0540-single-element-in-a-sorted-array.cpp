class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]==1)
                result=nums[i];
        }
        return result;
        
        
    }
};