// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).
int max_sum(int A[],int N)
{
    int curr_sum=0;
    for(int i=0;i<N;i++)
        curr_sum+=A[i];
    int curr_val=0;
    for(int i=0;i<N;i++)
        curr_val=curr_val+i*A[i];
    int res=curr_val;
    for(int i=1;i<N;i++){
        int next=curr_val-(curr_sum-A[i-1])+A[i-1]*(N-1);
        curr_val=next;
        res=max(res,next);
    }
    return res;
}
