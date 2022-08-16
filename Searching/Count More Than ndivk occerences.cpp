//time Comp: O(n)
//space Comp: O(1)


class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int count=0;
        for(auto x:mp){
            if(x.second>n/k)
                count++;
        }
        return count;
    }
};
