class Solution {
public:
    string longestPalindrome(string s) {
       //We will check for both odd length and even length substrings;
        
        int n=s.length();
        int start=0,maxlen=1;
        
        for(int i=1;i<n;i++)
        {
            int left=i,right=i;
            while(left>=0 && right<n  && s[left]==s[right])
            {
                int currlen=right-left+1;
                
                if(currlen>maxlen)
                {
                    maxlen=currlen;
                    start=left;
                }
                left--;
                right++;
            }
            
            left=i-1, right=i;
            while(left>=0 && right<n &&  s[left]==s[right])
            {
                int currlen=right-left+1;
                
                if(currlen>maxlen)
                {
                    maxlen=currlen;
                    start=left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxlen);
    }
};