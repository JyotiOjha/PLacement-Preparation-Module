#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *rotate(Node *& head,int n)
{   
    if (head == NULL || n <= 0)
        return head;

    Node* temp = head;
    int count = 1;

    while ( temp->next != NULL)
    {
        temp = temp->next;
        ++count;
    }

    temp->next = head;
    n = n%count;
    int k = count-n;
    while(k--) temp = temp->next;
    head = temp->next;
    temp->next = NULL;
    return head;
    
}
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    int n;
    cin>>n;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    Node *head = n1;
    
    rotate(head,n);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    return 0;



}