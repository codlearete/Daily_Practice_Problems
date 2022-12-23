#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
        /* data */
    public:
    void findSubset(int idx,int sum,vector<int>&arr,vector<int>&ans,int n)
    {
        if(idx==n)
        {
            ans.push_back(sum);
            return;
        }

        findSubset(idx+1,sum+arr[idx],arr,ans,n); //Take
        findSubset(idx+1,sum,arr,ans,n); //Not Take
    }
    vector<int>subSet(vector<int>&arr,int n)
    {
        vector<int>ans;
        findSubset(0,0,arr,ans,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
    
    

};

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n;
        cin>>n;

        vector<int>arr(n);

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }

        Solution obj;
        vector<int>ans = obj.subSet(arr,n);

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}