#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data  = data;
        next = NULL;
    }
};

Node *mergelists(Node *&head1,Node *&head2)
{
       if(head1==NULL)
          return head2;
       if(head2==NULL)
          return head1;
       if(head1->data <= head2->data)
          {
              head1->next = mergelists(head1->next,head2);
              return head1;

          }
          else
          {
              head2->next = mergelists(head1,head2->next);
              return head2;
          }
       
       
}
int main()
{
    Node *head1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(4);
    Node *head2 = new Node(1);
    Node *n4 = new Node(3);
    Node *n5 = new Node(4);

    head1->next = n2;
    n2->next = n3;

    head2->next = n4;
    n4->next = n5;

    Node *ans = mergelists(head1,head2);
    while(ans!=NULL)
    {
        cout<<ans->data<<" ";
        ans = ans->next;
    }
    return 0;

}