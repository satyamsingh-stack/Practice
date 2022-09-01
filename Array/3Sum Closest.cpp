// Expected Time Complexity: O(N*N).
// Expected Auxiliary Space: O(1).

class Solution {
public:
    int threeSumClosest(vector<int> &arr, int target) {
        int diff=INT_MAX;
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int first=i+1;
            int end=arr.size()-1;
            while(first<end){
                if(arr[i]+arr[first]+arr[end]==target)
                    return target;
                else if(abs(arr[i]+arr[first]+arr[end]-target)<diff){
                    diff=abs(arr[i]+arr[first]+arr[end]-target);
                    ans=arr[i]+arr[first]+arr[end];
                }
                if(arr[i]+arr[first]+arr[end]>target)
                    end--;
                else
                    first++;
            }
        }
        return ans;
    }
};
