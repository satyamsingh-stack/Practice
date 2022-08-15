// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int s=n*(n+1)/2;
        for(auto x:array)
            s-=x;
        return s;
    }
};
