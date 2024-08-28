#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
node* takeinput()
{
    node* head=NULL;
    node* temp=NULL;
    int data;
    cin>>data;
    while(data!=-1)
    {
        node* n=new node(data);
        if(head==nullptr)
        {
            head=temp=n;
        }
        else
        {
            temp->next=n;
            temp=n;
        }
        cin>>data;
    }
    return head;
}
node* insertatbegin(int data,node* head)
{
    node* n=new node(data);
    if(head==nullptr)
    {
        head=n;
    }
    else
    {
        n->next=head;
        head=n;
    }
    return head;
}
node* insertatmiddle(int data, int index, node* head) {
    if (index == 0) {  // Insert at the beginning
        node* n = new node(data);
        n->next = head;
        return n;
    }

    node* temp = head;
    for (int i = 1; i < index - 1; i++) {
        if (temp == nullptr) {
            cout << "Index out of bounds" << endl;
            return head;
        }
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Index out of bounds" << endl;
        return head;
    }

    node* n = new node(data);
    n->next = temp->next;
    temp->next = n;

    return head;
}

node* insertatend(int data,node* head)
{
    node* n=new node(data);
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=nullptr;
    return head;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* head=takeinput();
    cout<<endl;
    cout<<"enter insert: ";
    //head=insertatbegin(0,head);
    head=insertatmiddle(2,2,head);
    head=insertatend(6,head);
    display(head);
}
