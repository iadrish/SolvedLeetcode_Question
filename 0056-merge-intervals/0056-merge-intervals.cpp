class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        vector<int> temp = intervals[0];

        int n = intervals.size();
        for(auto it: intervals){
            if(temp[1] >= it[0]){
                // overlapping
                temp[1] = max(temp[1], it[1]);
            }
            else{
                // not overlapping
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;  
    }
};