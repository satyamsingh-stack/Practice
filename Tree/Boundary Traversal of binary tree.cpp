// Expected Time Complexity: O(N). 
// Expected Auxiliary Space: O(Height of the Tree).

class Solution {
public:
    bool isleaf(Node *root){
        return root->left==NULL && root->right==NULL;
    }
    void left(Node *root,vector<int> &res){
        Node *curr=root;
        while(curr!=NULL){
            if(!isleaf(curr))
                res.push_back(curr->data);
            if(curr->left!=NULL)
                curr=curr->left;
            else
                curr=curr->right;
        }
    }
    void addleaves(Node *root,vector<int> &res){
        if(isleaf(root)){
            res.push_back(root->data);
            return ;
        }
        if(root->left!=NULL)
            addleaves(root->left,res);
        if(root->right!=NULL)
            addleaves(root->right,res);
    }
    void right(Node *root,vector<int> &res){
        Node *curr=root;
        vector<int> temp;
        while(curr!=NULL){
            if(!isleaf(curr))
                temp.push_back(curr->data);
            if(curr->right!=NULL)
                curr=curr->right;
            else
                curr=curr->left;
        }
        for(int i=temp.size()-1;i>=0;i--)
            res.push_back(temp[i]);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> res;
        if(root==NULL)
            return res;
        if(root->left==NULL && root->right==NULL){
            res.push_back(root->data);
            return res;
        }
        res.push_back(root->data);
        left(root->left,res);
        addleaves(root,res);
        right(root->right,res);
        return res;
    }
};
