class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mp1, mp2;
        int n = s.length();
        int m = t.length();
        
        if(n != m){  //if there size is not the same no need to go furthur simply return false
           return false; 
        }
        
        for(int i=0; i<n; i++){
            
            if(mp1[s[i]] != mp2[t[i]])  //we map the char with the index+1
                return false;
            
            mp1[s[i]] = i+1;  //now why do we need to do index+1?
			mp2[t[i]] = i+1;  //try s="ppaer"  and t="title"  Got the ans?
            
        }
       return true; 
    }
};