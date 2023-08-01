class Solution {
public:
    bool isPalindrome(int x) {
       
        int num=x;
        long sum=0;
        while(num>0)
        {
            int a=num%10;
            sum=sum*10+a;
            num=num/10;
        }
        if(sum==x)
            return true;
        else
            return false;

    }
};