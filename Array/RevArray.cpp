//code to reverse the elements of an array

#include<bits/stdc++.h>
using namespace std;

void rev_array(int arr[],int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }    
}

void printarray(int arr[],int n)
{
    for(int i =0;i < n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rev_array(arr,0,n-1);
    printarray(arr,n);
    return 0;    
}