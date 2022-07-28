// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int ans=INT_MAX,indx=-1,indy=-1;
        for(int i=0;i<n;i++){
            if(a[i]==x)
                indx=i;
            if(a[i]==y)
                indy=i;
            if(indx!=-1 && indy!=-1)
                ans=min(ans,abs(indy-indx));
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};
