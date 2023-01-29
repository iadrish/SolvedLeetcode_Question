class Solution {
public:
    
    bool halvesAreAlike(string s) {
        int x=s.length()/2;
        int c1=0,c2=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o')
                c1++;
        }
        for(int i=x;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o')
                c2++;
        }
        if(c1!=c2)
            return false;
        
        return true;
    }
};