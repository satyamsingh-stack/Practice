// Expected Time Complexity: O(log N)
// Expected Auxiliary Space: O(1)

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
          if(x==0 || x==1)
            return x;
          long long int low=1,high=x/2,ans;
          while(low<=high){
              long long int mid=(low+high)/2;
              long long int sqr=mid*mid;
              if(sqr==x)
                return mid;
              if(sqr<=x)
                {
                    low=mid+1;
                    ans=mid;
                }
                else
                    high=mid-1;
          }
          return ans;
    }
};
