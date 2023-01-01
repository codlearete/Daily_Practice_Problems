#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    vector<int>v(256,0);
    string res = "";
    for(int i=0;i<s.length();i++)
    {
        v[s[i]]++;
        if(v[s[i]] > 1)
        {
            res += s[i];
            return res;
        }
    }
    return "-1";
}