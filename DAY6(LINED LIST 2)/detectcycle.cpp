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

bool hascycle(Node *&head)
{Node *slow = head;
   Node *fast = head;
   
   //If there is a loop both the pointers will meet at a point and if next value reaches null then there is no loop
   while(/*temp->next != NULL*/fast != NULL && fast->next != NULL)
   {
    
     slow  = slow->next;
     fast = fast->next->next;
    
     if(slow==fast)
        return true;
   }
   return false;
        
     
}

int main()
{
    Node *head = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    head->next = n2;
    n2->next = n3;
    n3 ->next = n4;
    n4 -> next = n5;
    n5->next = n3;

    cout<<hascycle(head);
    return 0;
}