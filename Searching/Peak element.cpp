// Expected Time Complexity: O(log N)
// Expected Auxiliary Space: O(1)

int peakElement(int arr[], int n)
{
   int low=0,high=n-1,mid;
   while(low<=high){
        mid=(low+high)>>1;
        if(arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid])
            break;
        if(arr[mid]<arr[mid-1])
            high=mid-1;
        else
            low=mid+1;
   }
   return mid;
}
