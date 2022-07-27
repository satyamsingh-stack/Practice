// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        vector<int> ans(2,-1);
        for(int i=0;i<sizeOfArray;i++){
            if(arr[i]>max){
                max2=max;
                max=arr[i];
            }
            else if(arr[i]>max2 && arr[i]<max)
                max2=arr[i];
        }
        ans[0]=max;
        if(max2>-1)
            ans[1]=max2;
        return ans;
    }
};
