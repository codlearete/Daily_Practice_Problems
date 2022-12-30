#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int>m1;
            unordered_map<char,int>m2;
            string res ="";
            
            for(int i=0;i<A.length();i++)
            {
                m1[A[i]]++;
            }
            for(int i=0;i<B.length();i++)
            {
                m2[B[i]]++;
            }
            for(auto it:m1){
                if(m2.find(it.first) == m2.end())
                {
                    res += it.first;
                }
            }
            for(auto it:m2){
                if(m1.find(it.first) == m1.end())
                {
                    res += it.first;
                }
            }
            if(res.length() == 0)return "-1";
            sort(res.begin(),res.end());
            return res;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends