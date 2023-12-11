class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int x=arr.size();
        int y=x/4;
        int result;
        unordered_map<int,int>mpp;
        for(int i=0;i<x;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>y){
                result=it.first;
            break;
            }
            
        }
        
        return result;
    }
};