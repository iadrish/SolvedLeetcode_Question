class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
       int maxE= *max_element(begin(nums),end(nums));
        
        int n=nums.size();
        
        int i=0,j=0;
        
        long long result=0;
        int countmax=0;
        
        while(j<n)
        {
            if(nums[j]==maxE)
            {
                countmax++;
            }
            
            while(countmax>=k)
            {
                result+=n-j;
                
                if(nums[i]==maxE)
                {
                    countmax--;
                }
                i++;
            }
            j++;
        }
            return result;
    }
};