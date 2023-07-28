#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node (int data)
    {
        this->data = data;
        next=NULL;
    }
};

Node *reverse(Node *&head,int k)
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
   delete ans;
   return head;
       

}
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    int k;
    cin>>k;
    Node *head = n1;
    reverse(head,k);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    return 0;
}