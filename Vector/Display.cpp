#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n,data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        v.push_back(data);
    }
    cout<<"Vector - ";
    for(auto i= v.begin(); i != v.end(); ++i)
    cout<<*i<<" ";
    cout<<endl;
    cout<<"Vector in reverse format  - ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
    cout << *ir << " ";
    cout<<endl;
    return 0;
}   