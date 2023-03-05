class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        int sz = s.size();
        sort(s.begin(),s.end());
        int ans = INT_MAX;
        do{
        int left = 0; 
        for(int i=0;i<sz;++i){
            left*=10;
            left += (s[i]-'0');
            
            int right = 0;
            for(int j=i+1;j<sz;++j){
                right*=10;
                right += (s[j]-'0');
            }
            
            int sum = left + right;
            ans = min(ans,sum);
        }
            
        }while(next_permutation(s.begin(),s.end()));
        
        return ans;
    }
};