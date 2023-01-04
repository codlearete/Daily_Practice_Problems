#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    //code here.
    unordered_map<char, pair<char, int>>hm;
    
    int count = 0;
    int digit = '2';
    
    for(int i = 'A'; i < 'Z'; i++){
        if(i == 'S')
            continue;

        hm[i] = {digit, count+1};

        count++;
        count%=3;
        if(!count)
            digit++;
    }
    
    hm['S'] = {'7', 4};
    hm['Z'] = {'9', 4};
    
    string ans = "";
    for(char c : S){
        if(c == ' ')
            ans += '0';
        else
            for(int i = 0; i < hm[c].second; i++)
                ans += hm[c].first;
    }
    
    return ans;
}