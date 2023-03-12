class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row=matrix.size();
        int column=matrix[0].size();
        int mid;
        int start=0;
        int end= (row*column)-1;
        mid=(start+end)/2;
        while(start<=end)
        {
            int element= matrix[mid/column][mid%column];
            
            if(element==target)
                return 1;
            
            else if(element<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
                mid=start+(end-start)/2;
        }
        return 0;
    }
};