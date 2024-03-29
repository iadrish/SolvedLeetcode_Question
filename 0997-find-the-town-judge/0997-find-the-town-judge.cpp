class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int>trusted(n+1,0);
        for(auto person:trust)
        {
            trusted[person[0]]--;
            trusted[person[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(trusted[i]==n-1)
                return i;
        }
        return -1; 
    }
};