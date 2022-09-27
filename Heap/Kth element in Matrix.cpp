// Expected Time Complexity: O(K*Log(N))
// Expected Auxiliary Space: O(N)

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            minheap.push(mat[i][j]);
        }
    }
    int res=0;
    while(k--){
        res=minheap.top();
        minheap.pop();
    }
    return res;
}
