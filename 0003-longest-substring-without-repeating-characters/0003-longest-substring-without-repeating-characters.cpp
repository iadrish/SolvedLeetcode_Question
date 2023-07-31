class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right=0;
        int left=0;
        int n=s.length();
        int maxl=0;
        unordered_set<char>charSet;
        for( int right=0;right<n;right++)
        {
            if(charSet.count(s[right])==0){
                charSet.insert(s[right]);
            maxl=max(maxl,right-left+1);
            }
            else
            {
                while(charSet.count(s[right]))
                {
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }
        return maxl;
    }
};