class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.length()/2;
        int c=0,r=0;
        for(int i=0;i<l;i++)
        {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' )
                c++;
        }
        for(int i=l;i<s.length();i++)
        {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' )
                r++;
        }
        
        if(c==r)
            return true;
        else
            return false;
    }
};