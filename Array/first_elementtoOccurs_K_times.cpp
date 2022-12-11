#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Approach:
we initialise an vector of size 160(it is maximum value of the element) and assign 0 to each and every index.
We keeps on counting each element occurrence and stored it in the new vector respective to their index which is also the same as the element value
(array element = new vector index) 
we compare the new vector element with the value k, if equal then the index of the new vector is return o/w loop continues 
if none is found then we return -1*/

//Time Complexity = O(N)
//Auxillary Space = O(N)

void inputArray(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void firstElementk(vector<int>&v,int n,int k)
{
    vector<int>a(120,0);

    for(int i=0;i<n;i++)
    {
        a[v[i]]++;
        if(a[v[i]] == k)
        {
            cout<<v[i]<<endl;
            break;
        }
    }
}


int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);

        inputArray(arr,n);
        firstElementk(arr,n,k);

    }

    return 0;
}