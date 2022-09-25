// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

class Solution{
    public:
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        bool ltr = true;
        if(root ==NULL) return ans;
        while(!q.empty()){
            int size = q.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                Node* node = q.front();
                q.pop();
                int indx = ltr ? i : size-i-1;
                row[indx] = node->data;
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            ltr = !ltr;
            for(auto i:row){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
