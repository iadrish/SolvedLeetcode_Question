class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         sort(s.rbegin(),s.rend());
        int n=s.size();
        // swap(s[0],s[n-1]);
        for(int i=n-2;i>=0;i--){
            if(s[i]=='1')
                swap(s[i],s[n-1]);
        }
        return s;
    }
};