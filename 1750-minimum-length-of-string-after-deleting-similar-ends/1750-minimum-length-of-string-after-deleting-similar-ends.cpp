class Solution {
public:
    int minimumLength(string s) {
        int start=0,end=s.size()-1;
        while(start<end && s[start]==s[end])
        {
            char curr=s[start];
            while(start<=end && s[start]==curr)start++;
            while(start<=end && s[end]==curr)end--;
        }
        return end-start+1;
    }
};