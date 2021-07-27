//question link - https://www.codechef.com/KRSH2021/problems/ALEXMINE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        c=0;
        int temp = arr[i];
        for (int j = 0; j < n; j++)
        {
            if(temp==arr[j])
            c++;
        }
        if(c==1)
        cout<<temp<<" ";
    }    
    for (int i = 0; i < n; i++)
    {
        c=0;
        int temp = arr[i];
        for (int j = 0; j < n; j++)
        {
            if(temp==arr[j])
            c++;
        }
        if(c==2)
        cout<<temp<<" ";
    }  
    for (int i = 0; i < n; i++)
    {
        c=0;
        int temp = arr[i];
        for (int j = 0; j < n; j++)
        {
            if(temp==arr[j])
            c++;
        }
        if(c==3)
        cout<<temp<<" ";
    }      
    cout<<endl;
    return 0;
}