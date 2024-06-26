class Solution {
public:
    bool isPalindrome(string s, int i, int j)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    void func(int index,string s, vector<string>&path,vector<vector<string>>&result)
    {
        if(index==s.size())
        {
            result.push_back(path);
            return; 
        }
        for(int i=index;i<s.size();i++)
        {
            if(isPalindrome(s,index,i))
            {
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,path,result);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>path;
        func(0,s,path,result);
        return result;
    }
};