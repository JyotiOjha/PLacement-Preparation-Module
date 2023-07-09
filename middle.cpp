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
        next = nullptr;
    }

};
int middle(Node *&head)
{   if(head==nullptr)
       return -1;
    Node *temp1 = head;
    Node *temp2 = head;
    while(temp1!=nullptr && temp2->next!=nullptr)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    
return temp1->data;

    
}
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);

    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    int ans  = middle(head);
    cout<<ans<<endl;
    return 0;

}