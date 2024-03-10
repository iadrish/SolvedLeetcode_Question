class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>vec;
        
        for(auto i:nums1)
            s1.insert(i);
        for(auto j:nums2)
            s2.insert(j);
        
        for(auto x:s1){
            if(s2.find(x)!=s2.end())
                vec.push_back(x);
        }
        
        return vec;
        
        
        
    }
};