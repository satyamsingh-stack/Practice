// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
class Solution{
    public:
    void reverse(int arr[],int beg,int end){
        while(beg<=end){
            swap(arr[beg],arr[end]);
            beg++;
            end--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
};
