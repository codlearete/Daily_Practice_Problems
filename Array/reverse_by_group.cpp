#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Approach: To reverse the array element we swap the element*/

//Time Complexity = O()
//Auxillary Space = O()

void inputArray(vector<long long>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void printArray(vector<long long>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void swapElement(vector<long long>&v,int i,int j)
{
    while(i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

}

void reverseGroup(vector<long long>&arr,int n,int k)
{
    int i=0;
    int j;
    
    if(k<n)
    {
        j=k-1;
        
    }
    else
    {
        j=n-1;
    }
    while(i<n)
    {
        swapElement(arr,i,j);
        i = i+k;
        j = j+k;
        if(j>=n)
        {
            while(j>=n)
            {
                j--;
            }
        }
    }
}



int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n;

        vector<long long>arr(n);

        inputArray(arr,n);

        cin>>k;

        reverseGroup(arr,n,k);
        printArray(arr,n);


    }

    

    return 0;
}