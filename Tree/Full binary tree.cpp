// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

bool isFullTree (struct Node* root)
{
    if(root->left==NULL && root->right==NULL)
        return true;
    return root->left!=NULL && root->right!=NULL && isFullTree(root->left) && isFullTree(root->right);
}
