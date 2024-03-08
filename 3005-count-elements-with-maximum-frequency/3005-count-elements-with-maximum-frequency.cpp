class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
         int count=-1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            count=max(count,mp[nums[i]]);
        }
        int res=0;
        
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==count)
                res++;
        }
            return res*count;
        
    }
};