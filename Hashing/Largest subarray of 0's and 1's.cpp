// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

class Solution{
  public:
    int solution(int arr[],int n,int s){
        int pre_sum=0,res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            pre_sum+=arr[i];
            if(mp.find(pre_sum-s)!=mp.end())
                res=max(res,i-mp[pre_sum-s]);
            if(mp.find(pre_sum)==mp.end())
                mp.insert({pre_sum,i});
            if(pre_sum==s)
                res=i+1;
        }
        return res;
    }
    int maxLen(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                arr[i]=-1;
        }
        solution(arr,n,0);
    }
};
