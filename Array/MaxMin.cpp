//code to find the max and min element in an array 

#include<bits/stdc++.h>
using namespace std;

int max(int arr[],int n)
{
    int m = -9999;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    return m;
}

int min(int arr[],int n)
{
    int m = 9999;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<m)
        m=arr[i];
    }
    return m;
}

int main()
{
    int n;
    cin>>n; //scanf()
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Max = "<<max(arr,n)<<"\nMin = "<<min(arr,n)<<endl; //printf
    return 0;
}