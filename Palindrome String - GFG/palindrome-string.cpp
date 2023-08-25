//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int len=S.length();
	    int lb=0;
	    int ub=len-1;
	    int result=1;
	    while(lb<=ub)
	    {
	        if(S[lb]!=S[ub])
	        {
	            result=0;
	            break;
	            
	        }
	        lb++;
	        ub--;
	       
	    }
	    return result;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends