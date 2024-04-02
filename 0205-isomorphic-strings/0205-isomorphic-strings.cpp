class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        
        if(l1!=l2) return false;
        
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
       for(int i=0;i<l1;i++)
       {   
         if(freq1[s[i]]!=freq2[t[i]])
             return false;
            
            
            freq1[s[i]]=i+1;
            freq2[t[i]]=i+1;
        } 
        
     return true;
    }
};