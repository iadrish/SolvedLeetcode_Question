class Solution {
public:
    bool solve(int l, int r,vector<int>&nums)
    {
        if(r-l==1) return true;
        vector<int>temp;
        for(int i=l;i<=r;i++)
        {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int d=temp[1]-temp[0];
        
        for(int i=2;i<temp.size();i++)
        {
             if(temp[i]-temp[i-1]!=d) return false;
        }
        
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++)
        {
            ans.push_back(solve(l[i],r[i],nums));
        }
        return ans;
    }
};