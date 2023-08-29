class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int max_score=0,score=0, right_time=-1;
        for(int i=0;i<n;i++)
        {
            score+=(customers[i]=='Y')?1:-1;
            if(score>max_score)
            {
                max_score=score;
                right_time=i;
            }
        }
        return right_time+1;
        
    }
};