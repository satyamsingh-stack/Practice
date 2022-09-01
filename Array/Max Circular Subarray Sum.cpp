// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).


class Solution{
    public:
    int kadans(int arr[],int n){
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
    int circularSubarraySum(int arr[], int n){
        int x=kadans(arr,n);
        int y=0;
        for(int i=0;i<n;i++){
            y+=arr[i];
            arr[i]*=-1;
        }
        int z=kadans(arr,n);
        if(y+z==0)
            return x;
        return max(x,y+z);
    }
};
