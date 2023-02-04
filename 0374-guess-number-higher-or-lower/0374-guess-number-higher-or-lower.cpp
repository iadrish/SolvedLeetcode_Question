/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=0,high=n;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int ret=guess(mid);
            if(ret==0)
            {
                return mid;
            }
            else if(ret==1)
                
            {
                low=mid+1;
            }
            else if(ret==-1)
            {
                high=mid-1;
            }
        }
        return low;
    }
};