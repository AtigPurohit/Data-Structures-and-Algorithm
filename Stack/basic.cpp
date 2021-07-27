#include<bits/stdc++.h>
using namespace std;
#define s2 10

struct stk
{
    char arr[s2];
    int top;
};
typedef struct stk Stack;
void initialize(Stack *p)
{
    if(p!= NULL)
    p-> top = -1;
    else 
    exit(0);
}
//checking overflow
int isFull(Stack *p)
{
    if(p->top == s2-1)
    return 1;
    else 
    return 0;
}
//checking underflow 
int isEmpty(Stack *p)
{
    if(p->top == -1)
    return 1;
    else
    return 0;
}
//push function 
void push(Stack *p,char v)
{
    if(!isFull(p))
    {
        p->top++;
        p->arr[p->top]=v;
    }
    else
    cout<<"Overflow"<<endl;
}
//pop function 
char pop(Stack *p)
{
    char t;
    if(!isEmpty(p))
    {
        t=p->arr[p->top];
        p->top--;
    }
    else
    cout<<"Underflow"<<endl;
}
//display function
void display(Stack *p)
{
    int i;
    if(!isEmpty(p))
    {
        for (int i = p->top; i >= 0; i--)
        {
            cout<<p->arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    cout<<"Stack is empty"<<endl;
}
int main()
{
    Stack *s = new Stack;
        
    initialize(s);
    push(s, 'A');
    push(s, 'B');
    push(s, 'C');
    push(s, 'D');

    display(s);

    return 0;
}