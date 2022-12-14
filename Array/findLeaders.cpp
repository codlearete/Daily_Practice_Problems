#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Approach: */

//Time Complexity = O()
//Auxillary Space = O()

class Solution
{
private:
    /* data */
public:
    vector<int> leaders(int a[], int n){

        // Code here
        vector<int>v;
        int curr_leader = a[n-1];
        
        v.push_back(a[n-1]);

        for(int i=n-2;i>=0;i--)
        {
            
            if(a[i]>=curr_leader)
            {
                curr_leader = a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }  
};

// Solution::Solution(/* args */)
// {
// }

// Solution::~Solution()
// {
// }


int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution obj;
        // printArray(arr,n);
        vector<int>v = obj.leaders(a,n);

        for(auto it = v.begin();it != v.end();it++)
        {
            cout<<*it<<" ";

        }
        cout<<endl;

    }

    return 0;
}