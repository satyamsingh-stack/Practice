// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).


class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int N)
    {
        int low=0,mid=0,high=N-1;
        while(mid<=high){
            switch(arr[mid]){
                case 0:
                    swap(arr[low],arr[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid],arr[high]);
                    high--;
                    break;
            }
        }
    }
};
