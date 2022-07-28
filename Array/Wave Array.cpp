// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=1;i<n;i=i+2){
            swap(arr[i-1],arr[i]);
        }
        
    }
};
