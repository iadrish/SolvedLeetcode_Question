class Solution {
    public boolean checkIfExist(int[] arr) {
        boolean flag=false;
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[i]==2*arr[j] || arr[i]*2==arr[j])
                     flag=true;
                
            }
        }
        return flag;
    }
}