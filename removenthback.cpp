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

Node *reverse(Node *&head,int n)
{
        Node * start = new Node(NULL);
        start -> next = head;
        Node* fast = start;
        Node* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;

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
    int n;
    cin>>n;
    Node *head = n1;
    reverse(head,n);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    return 0;
}