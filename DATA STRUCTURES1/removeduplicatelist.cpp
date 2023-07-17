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

Node *removeduplicate(Node *&head)
{
    Node *temp = head;
    while(temp && temp->next)
    {
        if(temp->data==temp->next->data)
        {
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    Node * n1 = new Node(1);
    Node *n2 = new Node(1);
    Node *n3 = new Node(2);
    Node *n4 = new Node(3);
    Node *n5 = new Node(3);
    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node *ans  = removeduplicate(head);
    while(ans!=NULL)
    {
        cout<<ans->data<<endl;
        ans = ans->next;
    }
    return 0;
}