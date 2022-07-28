// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).
// Note : The extra space is only for the array to be returned.
// Try and perform all operation withing the provided array. 

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x=arr[i]%n;
            arr[x]=arr[x]+n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=2*n)
                ans.push_back(i);
        }
        if(ans.size()==0)
            ans.push_back(-1);
        return ans;
    }
};
