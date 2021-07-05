#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int data;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        v.push_back(data);
    }
    cout<<"Before sort - ";
    for(auto i= v.begin(); i != v.end(); ++i)
    cout<<*i<<" ";
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"After sort  - ";
    for(auto i= v.begin(); i != v.end(); ++i)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}