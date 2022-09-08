// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).


class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int pre_sum=0,res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            pre_sum+=A[i];
            if(mp.find(pre_sum-0)!=mp.end())
                res=max(res,i-mp[pre_sum-0]);
            if(mp.find(pre_sum-0)==mp.end())
                mp.insert({pre_sum,i});
            if(pre_sum==0)
                res=i+1;
        }
        return res;
    }
};
