// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

 class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(sum<s)
                sum+=arr[i];
            while(sum>s){
                sum=sum-arr[j];
                j++;
            }
            if(sum==s && s!=0)
                return {j+1,i+1};
        }
        return {-1};
    }
};
