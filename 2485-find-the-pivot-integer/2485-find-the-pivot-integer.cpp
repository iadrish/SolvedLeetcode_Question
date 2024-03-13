class Solution {
public:
    int pivotInteger(int n) {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            s+=i;
        }
        int ans=-1;
        int s1=0;
        for(int i=1;i<=n;i++)
        {
            s1+=i;
            if(s==s1)
            {
                ans=i;
            }
            s-=i;
        }
        return ans;
    }
};