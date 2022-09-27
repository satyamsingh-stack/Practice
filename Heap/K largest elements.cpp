// Expected Time Complexity: O(N log K)
// Expected Auxiliary Space: O(K)

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<k;i++)
            minheap.push(arr[i]);
        for(int i=k;i<n;i++){
            if(minheap.top()>arr[i])
                continue;
            else{
                minheap.pop();
                minheap.push(arr[i]);
            }
        }
        while(minheap.empty()==false){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
