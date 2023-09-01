class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int c=0,x,num,sum;
        for(int i=0;i<=n;i++)
        {
            sum=0;
            num=i;
                while(num!=0)
                {
                   sum+=num%2;
                    
                    num=num/2;
                }
            ans.push_back(sum);
            }
        
        
        return ans;
    }
};