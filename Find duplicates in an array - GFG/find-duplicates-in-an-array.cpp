//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>freq;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
            {
               
            freq.push_back(it.first);
            }
            
        }
        sort(freq.begin(),freq.end());
        if(freq.size()==0)
        freq.push_back(-1);
        
        return freq;
    }
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends