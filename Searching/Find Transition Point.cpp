// Expected Time Complexity: O(LogN)
// Expected Auxiliary Space: O(1)

int transitionPoint(int arr[], int n) {
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)>>1;
        if(arr[mid]==0)
            low=mid+1;
        else if(arr[mid]==1){
            if(arr[mid-1]==0)
                return mid;
            else
                high=mid-1;
        }
    }
    return -1;
}
