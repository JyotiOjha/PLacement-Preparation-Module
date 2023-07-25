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


Node * removelist(Node *& head,int k)
{
   int cnt=0;
   Node *temp = head;
   while(temp!=NULL)
   {
     cnt++;
     temp=temp->next;
   }
   Node *temp2 = head;
   int n = cnt-k;
    if (n <= 0) // Handle the case where k is greater than or equal to the length of the list
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }
   while(n>1)
   {
      temp2 = temp2->next;
      n--;
   }
   Node *ans = temp2->next;
   temp2->next = temp2->next->next;
   return head;
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
    int k;
    cin>>k;
    Node* ans = removelist(head,k);
   while(ans!=NULL)
   {
    cout<<ans->data<<endl;
    ans = ans->next;
   }
    return 0;
    

}
