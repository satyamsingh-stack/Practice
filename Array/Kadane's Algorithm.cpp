// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)


class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxi)
                maxi=sum;
            if(sum<0)
                sum=0;
        }
        return maxi;
        
    }
};
