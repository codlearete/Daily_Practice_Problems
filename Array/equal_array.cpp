#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*Approach: */

//Time Complexity = O()
//Auxillary Space = O()

void inputfirstArray(vector<ll>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}
void inputsecondArray(vector<ll>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }    
}

bool check(vector<ll>&A, vector<ll>&B, int N){

    sort(A.begin(),A.end());
    // for(int i=0;i<N;i++)
    // {
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
    sort(B.begin(),B.end());
    // for(int i=0;i<N;i++)
    // {
    //     cout<<B[i]<<" ";
    // }

    // cout<<endl;

    int i = 0;

    int flag = true;

    while(i<N)
    {
        if(A[i] != B[i])
        {
            flag = false;
            break;
        }
        i++;

    }
    return flag;
}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>A(n);
        vector<ll>B(n);

        inputfirstArray(A,n);
        inputsecondArray(B,n);
        int ans = check(A,B,n);

        cout<<ans<<endl;

    }
    return 0;
}