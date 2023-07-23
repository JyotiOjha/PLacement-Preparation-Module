#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void postorder(TreeNode *root,vector<int>&ans)
{
    if(root==NULL) return;
    if(root->left) postorder(root->left,ans);
    if(root->right) postorder(root->right,ans);
    ans.push_back(root->data);
}
int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->right = new TreeNode(40);
    root->left->left = new TreeNode(50);
    root->right->right = new TreeNode(60);
    root->right->right->right = new TreeNode(70);

    vector<int>ans;
    postorder(root,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}