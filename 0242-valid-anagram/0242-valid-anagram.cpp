class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int l1=s.length();
        int l2=t.length();
        bool flag=false;
        if(l1!=l2)
            flag=false;
        else
        {
            for(int i=0;i<l1;i++)
            {
                if(s[i]!=t[i])
                {
                    flag=false;
                    break;
                }
                else
                {
                    flag=true;
                }
            }
            
        }
        
        return flag;
    }
};