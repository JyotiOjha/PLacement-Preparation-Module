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

void removenode(Node *&node)
{
   /*Node *temp = node;
    while(temp!=NULL)
    {
        swap(temp->data,temp->next->data);
        temp = temp->next;
    }
    delete temp;
    */
   Node *temp = node->next; // Store the next node
    node->data = temp->data; // Copy the data of the next node to the current node
    node->next = temp->next; // Bypass the next node by updating the next pointer
    delete temp;
 
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
   
    removenode(n3);
    while(n1!=NULL)
    {
        cout<<n1->data<<" ";
        n1 = n1->next;
    }

    return 0;
}