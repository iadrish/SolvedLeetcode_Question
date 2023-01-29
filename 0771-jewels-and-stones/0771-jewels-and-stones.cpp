class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>freq;
        for(int i=0;i<jewels.size();i++)
        {
            freq[jewels[i]]++;
        }
        int count=0;
        
        for(int i=0;i<stones.size();i++)
        {
            if(freq.find(stones[i])!=freq.end())
                count++;
        }
        return count;
    }
};