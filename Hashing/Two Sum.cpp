// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
  
 class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++){
            if(mp.find(X-A[i])!=mp.end())
                return true;
            mp[A[i]]++;
        }
        return false;
    }
};
