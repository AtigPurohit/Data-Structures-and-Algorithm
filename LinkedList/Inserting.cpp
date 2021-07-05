#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head =n;
        return;
    }
    node* temp = head;
    if(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    head = n;
}

void display(node* head)
{
    cout<<"The list - ";
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head,6);
    insertAtTail(head,9);

    display(head);    

    insertAtHead(head, 4);
    insertAtHead(head,3);
    insertAtHead(head, 7);

    display(head);
 
    return 0;
}