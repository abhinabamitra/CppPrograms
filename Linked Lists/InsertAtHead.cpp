/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    //Constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

//insertAtHead where head passed as reference
void insertAtHead(node* &head, int d)
{
    if(head==NULL)
    {
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}

//print function where head is passed as value
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}

int main()
{
    node *head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtHead(head,4);
    
    print(head);
    return 0;
}
