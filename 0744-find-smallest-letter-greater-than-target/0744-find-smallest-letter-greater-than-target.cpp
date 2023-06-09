class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(),letters.end());
        char cp;
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i]>target)
            {
                cp=letters[i];
                break;
            }
            else
                cp=letters[0];
        }
        return cp;
    }
};