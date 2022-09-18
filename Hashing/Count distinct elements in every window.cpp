// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++)
            mp[arr[i]]++;
        ans.push_back(mp.size());
        for(int i=k;i<n;i++){
            if(mp[arr[i-k]]==1)
                mp.erase(arr[i-k]);
            else
                mp[arr[i-k]]--;
            mp[arr[i]]++;
            ans.push_back(mp.size());
        }
        return ans;
    }
};
