class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int freq=0;
        long sum=0;
        int l=0;
        for(int r=0;r<nums.size();r++)
        {
            sum=sum+nums[r];
            
            while((sum+k)<(long(r-l+1)*nums[r]))
            {
                sum=sum-nums[l];
                l++;
            }
            freq=max(freq,r-l+1);
        }
        return freq;
    }
};