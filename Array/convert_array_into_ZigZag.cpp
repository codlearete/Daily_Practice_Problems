#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Approach: */

//Time Complexity = O()
//Auxillary Space = O()

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
void zigZag(vector<int>&arr, int n) {
    // code here
    
    for(int i=0;i<n-1;i++)
    {
        int count = i%2;
        
        if(count == 0)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        else
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
            
        }
    }
    
         
    }

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);

        inputArray(arr,n);
        zigZag(arr,n);
        printArray(arr,n);


    }

    

    return 0;
}