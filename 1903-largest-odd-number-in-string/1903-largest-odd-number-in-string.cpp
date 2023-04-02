class Solution {
public:
    string largestOddNumber(string num) {
        int x=num.size();
        for(int i=x-1;i>=0;i--)
        {
            if(num[i]%2==0)
                num.pop_back();
            else
                break;
        }
        return num;
    }
};