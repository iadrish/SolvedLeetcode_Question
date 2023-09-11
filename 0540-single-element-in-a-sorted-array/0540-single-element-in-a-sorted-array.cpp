class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int result;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto it:m)
        {
            if(it.second==1)
                result=it.first;
        }
        return result;
        
    }
};