#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Approach: */

//Time Complexity = O()
//Auxillary Space = O()

void summation(vector<int>&arr,int n,int s)
{
    int i=0,j=0;
    long long sum=0;
    for(;j<n;j++)
    {
        
        if(sum==s)
        break;
        sum+=arr[j];
        while(sum>s)
        {sum-=arr[i];
        i++;}
    }
    if(sum!=s or j<=i)
    {
        cout<<-1<<endl;
    }
    cout<<i+1<<" "<<j<<endl;
}

void inputArray(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void printArray(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n,s;
        cin>>n>>s;

        vector<int>arr(n);

        inputArray(arr,n);
        summation(arr,n,s);
        // printArray(arr,n);

    }

    return 0;
}