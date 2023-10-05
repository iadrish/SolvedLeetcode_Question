class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int x=nums.size();
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>x/3)
                result.push_back(it.first);
        }
        
        return result;
    }
};