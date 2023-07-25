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


Node * middleoflist(Node *& head)
{
    Node *temp1 = head;
    Node *temp2 = head;
    while(temp2!=NULL && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    
    return temp1;
}
int main()
{
    Node *head = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    Node* ans = middleoflist(head);
   while(ans->next!=NULL)
   {
    cout<<ans->data<<endl;
    ans = ans->next;
   }
    return 0;
    

}
