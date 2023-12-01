class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1=" ";
        string res2=" ";
        vector<string> res11;
        vector<string> res22;
        for(int i=0;i<word1.size();i++)
        {
            res1=res1+word1[i];
        }
        res11.push_back(res1);
         for(int i=0;i<word2.size();i++)
        {
            res2=res2+word2[i];
        }
        res22.push_back(res2);
        
        if(res11==res22)
            return true;
        else
            return false;
    }
};