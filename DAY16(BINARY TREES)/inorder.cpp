#include<bits/stdc++.h>
using namespace std;
//Inorder : left root right (DFS : use stack)
class TreeNode
{
   public:
   int data;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int data)
   {
    this->data = data;
    left=NULL;
    right=NULL;
   }

};

void inorder(TreeNode *&n1,vector<int>&ans)
{
    if(n1==NULL) return;
    if(n1->left)
    {
        inorder(n1->left,ans);
    }
    ans.push_back(n1->data);
    if(n1->right)
    {
        inorder(n1->right,ans);
    }
    

}
int main()
{
     TreeNode *root = new TreeNode(10);
     root->left = new TreeNode(20);
     root->right = new TreeNode(30);
     root->left->left = new TreeNode(40);
     root->left->right = new TreeNode(50);
     root->right->right = new TreeNode(60);
     root->right->right->right = new TreeNode(70); 
    vector<int>ans;
    inorder(root,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
    
}