class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         vector<int>freq(26);
        for(auto i : tasks) {
            freq[i-'A']++;
        } 

        sort(freq.begin(),freq.end(),greater<int>());
        int maxi_freq = freq[0];
        
        int ideal = (maxi_freq-1)*n ;
        for(int  i = 1 ;i < freq.size(); i++) {
                ideal = ideal -  min(maxi_freq-1,freq[i]);
        }

        return tasks.size()+max(0,ideal);
    }
};