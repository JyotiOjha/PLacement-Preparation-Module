#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        right = NULL;
        left=NULL;
    }
};
Node* mergetrees(Node* root1, Node* root2) {
         if(root1 == NULL)
        {
            return root2;
        }
        if(root2 == NULL )
        {
            return root1;
        } 
        root1->data += root2->data;
        root1->left = mergetrees(root1->left,root2->left);
        root1->right = mergetrees(root1->right,root2->right);
        
        return root1;
    }

void print(Node *root)
{    if (root == NULL) {
        return;
    }

    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(3);
    root1->right = new Node(2);
    root1->left->left = new Node(5);

    Node *root2 = new Node(2);
    root2->left = new Node(1);
    root2->right = new Node(3);
    root2->left->right = new Node(4);
    root2->right->right = new Node(7);

    mergetrees(root1,root2);

    print(root1);
    return 0;

}