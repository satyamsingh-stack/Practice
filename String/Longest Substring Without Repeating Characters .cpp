//time Comp: O(n)
//Space Comp: O(1)

class Solution{
  public:
    int SubsequenceLength (string s) 
    {
        vector<int> mp(256,-1);
        int left=0,right=0,len=0;
        while(right<s.length()){
            if(mp[s[right]]!=-1)
                left=max(mp[s[right]]+1,left);
            mp[s[right]]=right;
            len=max(right-left+1,len);
            right++;
        }
        return len;
    }
};
