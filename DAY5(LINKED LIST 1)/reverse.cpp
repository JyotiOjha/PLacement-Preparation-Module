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
        next=NULL;
    }
};

Node rev(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt =NULL;
    while(curr!=NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;

    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }

}
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    Node *head = n1;

    rev(head);

    return 0;
}