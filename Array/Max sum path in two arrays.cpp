// Expected Time Complexity: O(M + N)
// Expected Auxiliary Space: O(1)

class Solution{
    public:
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int ans=0,i=0,j=0,sum1=0,sum2=0;
        while(i<l1 && j<l2){
            if(A[i]<B[j]){
                sum1+=A[i];
                i++;
            }
            else if(A[i]>B[j]){
                sum2+=B[j];
                j++;
            }
            else{
                ans+=max(sum1,sum2)+A[i];
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        while(i<l1)
            sum1+=A[i++];
        while(j<l2)
            sum2+=B[j++];
        ans+=max(sum1,sum2);
        return ans;
    }
};
