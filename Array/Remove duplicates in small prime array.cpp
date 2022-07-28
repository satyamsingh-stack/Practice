class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int> ans;
        vector<int> freq(100,0);
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==0){
                ans.push_back(arr[i]);
            }
            freq[arr[i]]++;
        }
        return ans;
    }
};
