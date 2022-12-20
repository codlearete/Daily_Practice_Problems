#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
     int start = 0, end = n-1;

       vector<int> vec;
    
       while(start<=end){
    
           if(arr[start] != x){
    
               start++;
    
           }
    
           if(arr[end]!= x){
    
               end--;
    
           }
    
           if(arr[start]==x && arr[end] == x){
    
               vec.push_back(start);
    
               vec.push_back(end);
    
               break;
    
           }
    
       }
    
       if(start>end){ 
    
        vec.push_back(-1);
    
        vec.push_back(-1);
    
       }
    
       return vec;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends