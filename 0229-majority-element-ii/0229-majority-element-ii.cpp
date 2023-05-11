class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        /**unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>(nums.size()/3)){
                ans.push_back(nums[i]);
            freq[nums[i]]=INT_MIN;}
        }
        return ans;
        /**/
        int n=nums.size();
     vector<int>ans;
     unordered_map<int,int>mp;
     for(int i=0; i<n; i++){
         mp[nums[i]]++;
         if(mp[nums[i]]>n/3){
             ans.push_back(nums[i]);
             mp[nums[i]]=INT_MIN; // this is to avoid the retundancy 
         }
     }  
     return ans;
    }
};