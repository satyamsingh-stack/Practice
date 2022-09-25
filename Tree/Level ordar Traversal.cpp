// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

vector<vector<int>> levelOrder(Node* root)
{
  vector<vector<int>> ans;
  queue<Node*> q;
  q.push(root);
  while(q.empty()==false){
      vector<int> row;
      int size=q.size();
      for(int i=0;i<size;i++){
          auto temp=q.front();
          q.pop();
          row.push_back(temp->data);
          if(temp->left!=NULL)
            q.push(temp->left);
          if(temp->right!=NULL)
            q.push(temp->right);
      }
      ans.push_back(row);
  }
  return ans;
}
