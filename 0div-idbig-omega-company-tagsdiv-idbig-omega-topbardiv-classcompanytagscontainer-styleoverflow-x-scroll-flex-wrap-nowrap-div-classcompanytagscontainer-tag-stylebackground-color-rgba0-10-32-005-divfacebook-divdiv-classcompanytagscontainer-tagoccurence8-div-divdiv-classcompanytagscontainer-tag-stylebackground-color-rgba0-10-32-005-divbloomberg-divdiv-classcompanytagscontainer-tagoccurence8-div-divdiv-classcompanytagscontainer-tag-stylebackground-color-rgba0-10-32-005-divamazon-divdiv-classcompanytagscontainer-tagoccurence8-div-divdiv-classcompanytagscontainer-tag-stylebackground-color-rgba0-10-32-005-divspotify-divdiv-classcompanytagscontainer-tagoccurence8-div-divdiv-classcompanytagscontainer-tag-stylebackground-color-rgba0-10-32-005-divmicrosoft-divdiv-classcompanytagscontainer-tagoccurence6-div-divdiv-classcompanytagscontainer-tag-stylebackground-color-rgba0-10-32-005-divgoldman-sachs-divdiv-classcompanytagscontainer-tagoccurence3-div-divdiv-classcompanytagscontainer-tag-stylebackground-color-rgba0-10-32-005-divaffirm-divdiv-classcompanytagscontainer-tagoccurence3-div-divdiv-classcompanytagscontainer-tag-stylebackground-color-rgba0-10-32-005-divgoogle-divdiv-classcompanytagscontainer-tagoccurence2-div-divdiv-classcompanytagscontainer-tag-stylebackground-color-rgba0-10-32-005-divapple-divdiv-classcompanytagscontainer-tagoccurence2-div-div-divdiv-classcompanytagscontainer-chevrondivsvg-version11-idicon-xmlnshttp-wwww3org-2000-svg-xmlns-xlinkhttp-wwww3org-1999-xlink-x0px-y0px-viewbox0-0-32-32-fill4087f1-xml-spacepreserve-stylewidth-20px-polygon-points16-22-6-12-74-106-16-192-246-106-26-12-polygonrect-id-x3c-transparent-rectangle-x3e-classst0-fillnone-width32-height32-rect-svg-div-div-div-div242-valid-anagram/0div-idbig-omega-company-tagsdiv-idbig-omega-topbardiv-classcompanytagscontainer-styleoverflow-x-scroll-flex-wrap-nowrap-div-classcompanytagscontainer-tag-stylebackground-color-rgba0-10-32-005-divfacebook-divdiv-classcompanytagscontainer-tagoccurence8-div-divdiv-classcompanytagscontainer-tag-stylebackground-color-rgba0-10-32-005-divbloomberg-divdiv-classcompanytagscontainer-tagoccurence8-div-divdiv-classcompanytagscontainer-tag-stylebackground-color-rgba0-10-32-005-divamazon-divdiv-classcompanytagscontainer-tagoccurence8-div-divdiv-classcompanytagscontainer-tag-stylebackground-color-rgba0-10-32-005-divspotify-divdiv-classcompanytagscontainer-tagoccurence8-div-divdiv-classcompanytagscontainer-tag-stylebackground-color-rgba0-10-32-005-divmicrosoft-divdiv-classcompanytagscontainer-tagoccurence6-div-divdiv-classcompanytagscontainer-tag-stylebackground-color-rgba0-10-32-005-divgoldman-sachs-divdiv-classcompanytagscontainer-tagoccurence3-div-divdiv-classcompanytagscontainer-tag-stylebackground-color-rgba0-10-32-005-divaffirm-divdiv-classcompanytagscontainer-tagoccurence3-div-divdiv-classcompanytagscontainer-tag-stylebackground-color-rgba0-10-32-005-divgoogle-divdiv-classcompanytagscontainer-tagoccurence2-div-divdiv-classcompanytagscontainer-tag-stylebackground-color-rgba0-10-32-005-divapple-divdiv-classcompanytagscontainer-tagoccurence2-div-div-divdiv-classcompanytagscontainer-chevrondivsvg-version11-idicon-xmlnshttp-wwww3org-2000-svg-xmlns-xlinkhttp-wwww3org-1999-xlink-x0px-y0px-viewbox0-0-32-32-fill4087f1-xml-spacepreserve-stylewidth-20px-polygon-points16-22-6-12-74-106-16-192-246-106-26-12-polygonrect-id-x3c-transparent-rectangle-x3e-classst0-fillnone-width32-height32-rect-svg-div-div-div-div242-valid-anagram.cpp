class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool x=true;
        if(s.length()!=t.length())
        {  
            x=false;
        }
        else
        {    
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            {
                x=false;
                break;
            }
        }
        }
        
        return x;
    }
};