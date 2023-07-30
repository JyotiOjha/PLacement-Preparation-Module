#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next=NULL;
    }
};

Node *findintersection(Node *&head1,Node *&head2)
{   
      Node *temp;
		while(head1 != NULL){
			temp = head2;
			while(temp != NULL){
				if(head1 == temp){
					return head1;
				}
				temp = temp -> next;
			}
			head1 = head1 -> next;
		}
		return NULL;
}
int main()
{
    Node *head1 = new Node(1);
    Node *n2 = new Node(3);
    Node *n3 = new Node(1);
    Node *n4 = new Node(2);
    Node *n5 = new Node(4);
    head1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node *head2 = new Node(3);
    Node *h2 = new Node(2);
    Node *h3 = new Node(4);
    head2->next = h2;
    h2->next = h3;

   Node * ans =  findintersection(head1,head2);
   cout<<ans->data;
   return 0;
}