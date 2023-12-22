class Solution {
public:
    int maxScore(string s) {
        int i=0,c1=0,c2=0,result,minax=0;
        string str1="",str2=" ";
        for(int i=0;i<s.length()-1;i++)
        {
            int c1=0;
            for(int j=0;j<=i;j++)
            {
                if(s[j]=='0')
                    c1++;
            }
            for(int k=i+1;k<s.length();k++)
            {
                if(s[k]=='1')
                    c1++;
            }
            
            minax=max(minax,c1);
        }
        return minax;
    }
};