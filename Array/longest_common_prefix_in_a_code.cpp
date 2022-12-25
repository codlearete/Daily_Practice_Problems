#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string commonPrefix(string &s1,string &s2)
    {
        string res = "";
        int len = min(s1.length(),s2.length());

        for (int i = 0; i < len; i++)
        {
            /* code */
            if(s1[i] != s2[i])
            {
                break;
            }
            res += s1[i];
        }
        if(res.length() == 0)return "-1";
        return res;

    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix = arr[0];

        for (int i = 1; i < N; i++)
        {
            /* code */
            prefix = commonPrefix(prefix,arr[i]);
            
        }
        return prefix;
        
    }
        
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
