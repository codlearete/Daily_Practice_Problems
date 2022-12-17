#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>m;
        int sum = 0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            sum += A[i];

            if(sum == 0)
            {
                mx = i+1;
            }

            if(m.find(sum) != m.end())
            {
                mx = max(mx,i-m.find(sum)->second);
            }
            else{
                m[sum] = i;
            }
            
        }

        return mx;

    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}