class Solution {
public:
    bool isAnagram(string s, string t) {
       map<int,int>mp,mp2;
        if(s.size()!=t.size())
        return false;
        else{
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp2[t[i]]++;

        }
        }
        if (mp==mp2)
        return true;
        else 
        return false;
            
    }
};