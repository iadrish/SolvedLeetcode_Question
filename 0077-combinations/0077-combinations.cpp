class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    
    void helper(int i,int n,int k,vector<vector<int>>&ans,vector<int>&temp)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        
        if(i<=n)
        {
            temp.push_back(i);
            helper(i+1,n,k,ans,temp);
            temp.pop_back();
            helper(i+1,n,k,ans,temp);
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        helper(1,n,k,ans,temp);
        return ans;
    }
};