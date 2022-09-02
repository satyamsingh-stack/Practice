// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)


class Solution{

    
    public:
    long long trappingWater(int arr[], int n){
        long long res=0;
        int maxleft=0,maxright=0,l=0,r=n-1;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=maxleft)
                    maxleft=arr[l];
                else
                    res+=maxleft-arr[l];
                l++;
            }
            else{
                if(arr[r]>=maxright)
                    maxright=arr[r];
                else
                    res+=maxright-arr[r];
            
                r--;
            }
        }
        return res;
    }
};
