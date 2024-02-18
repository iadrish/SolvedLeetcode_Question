class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int x;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(auto it:freq)
        {
            if(it.second>nums.size()/2)
                x=it.first;
        }
        
        return x;
    }
};