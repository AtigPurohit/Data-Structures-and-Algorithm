//code to revrese a string

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    char ch;
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s.at(i);
        if(ch != ' ')
        str = ch+str;       
    }
    cout<<str<<endl;
    return 0;
}