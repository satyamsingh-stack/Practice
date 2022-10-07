// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)


class Solution{
    public:
    int maxIndexDiff(int A[], int N) 
    { 
        int temp[N];
        temp[0]=A[0];
        for(int i=1;i<N;i++)
            temp[i]=min(temp[i-1],A[i]);
        int i=N-1,j=N-1;
        int ans=INT_MIN;
        while(i>=0 && j>=0){
            if(A[j]>=temp[i]){
                ans=max(ans,j-i);
                i--;
            }
            else
                j--;
        }
        return ans;
    }
};
