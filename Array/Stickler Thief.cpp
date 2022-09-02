// Expected Time Complexity:O(N).
// Expected Space Complexity:O(N).


class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<long long int> a(n,-1);
       a[0]=arr[0];
       if(n>1) {
           a[1]=arr[1];
       }
       long long int m=max(a[0],a[1]);
       for(int i=2; i<n; i++) {
           a[i]=max(arr[i]+a[i-2],(a[i-1]-arr[i-1])+arr[i]);
           m=max(m,a[i]);
       }
       return m;
   }
};
