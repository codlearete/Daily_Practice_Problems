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
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int l_sum=0;
        int sum = 0;
        int res = -1;
        for(int i=0;i<n;i++)
        {
            sum +=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(l_sum == sum-a[i])
            {
                res = i+1;
            }
            l_sum += a[i];
            sum -= a[i];
            
        }
        return res;
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

        long long a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution obj;

        cout<<obj.equilibriumPoint(a,n)<<endl;

    }

    return 0;
}