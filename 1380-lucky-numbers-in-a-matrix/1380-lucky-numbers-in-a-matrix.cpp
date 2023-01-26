class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            long long mini=1000005;
            int index=-1;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]<mini)
                {
                    mini=matrix[i][j];
                    index=j;
                }
            }
        
            long long  maxi=-1;
            for(int j=0;j<m;j++)
            {
                if(matrix[j][index]>maxi)
                    maxi=matrix[j][index];
            }
            if(maxi==mini)
                ans.push_back(maxi);
        }
            return ans;
            
        
    }
};