class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        int x=s.size();
        int y=t.size();
        if(x==y)
        {
            for(int i=0;i<x;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
        }
        else
            return false;
        return true;
    }
};