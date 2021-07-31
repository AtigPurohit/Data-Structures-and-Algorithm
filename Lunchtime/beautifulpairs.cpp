//question link - https://www.codechef.com/LTIME98B/problems/BUTYPAIR

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,s=0;
        cin>>n;
        long long int arr[n];
        unordered_map<long long int, int> m;
        for (i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]=0;
        }       
        for (i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }        
        for(auto x:m)
        {
            if(x.second>1)
            {
                long long int c = (n-x.second);
                c=c*(x.second);
                s=s+c;
            }
            else
            s=s+n-1;
        }    
        cout<<s<<endl;
    }
    return 0;
}