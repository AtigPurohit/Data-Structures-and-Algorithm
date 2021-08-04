//question link - https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h>
using namespace std;
#define s2 1000

class Solution
{
    public: 
    bool matchingBrackets(char a, char b){
        return ((a=='('&& b==')')||(a=='['&&b==']')||(a=='{'&&b=='}'));
    }
    bool isValid(string s) 
    {
        stack<char> Stack;
        char ch;
        for (int i = 0; i < s.length(); i++)
        {
            ch=s.at(i);
            if(ch=='('||ch=='{'||ch=='[')
            Stack.push(ch);
            else
            {
                if(Stack.empty()) return false;
                char chp = Stack.top();
                if(matchingBrackets(Stack.top(),ch)==false)                 
                    return false;
                else 
                    Stack.pop(); 
            }
        }
        return (Stack.empty());        
    }
};  

int main()
{
    string st;
    Solution ob;
    cin>>st;
    bool b = ob.isValid(st);
    if(b)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}