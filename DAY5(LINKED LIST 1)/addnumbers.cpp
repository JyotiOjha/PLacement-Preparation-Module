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

Node *addnumbers(Node *&head1,Node *&head2)
{
    int carry = 0;
     Node *dummy = new Node(0); 
    Node *curr = dummy;

    while (head1 != NULL || head2 != NULL || carry != 0)
    {
        int sum = carry;
        if (head1 != NULL)
        {
            sum += head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10; 
        curr->next = new Node(sum % 10); 
        curr = curr->next;
    }

    return dummy->next;
}
int main()
{
    Node *head1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(4);
    Node *head2 = new Node(1);
    Node *n4 = new Node(8);
    Node *n5 = new Node(4);

    head1->next = n2;
    n2->next = n3;

    head2->next = n4;
    n4->next = n5;

    Node *ans = addnumbers(head1,head2);
    while(ans!=NULL)
    {
        cout<<ans->data<<" ";
        ans = ans->next;
    }
    return 0;

}