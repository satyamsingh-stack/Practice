// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorder(Node *root,vector<int> &ans){
        if(root!=NULL){
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
    }
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        inorder(root,ans);
        return ans;
    }
};
