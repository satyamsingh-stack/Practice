//Time Comp: O(N)
//Space Comp: O(1)


class Solution{
    public:
    void arrange(long long arr[], int n) {
        for(int i=0;i<n;i++){
            int x=arr[i];
            int y=arr[x];
            arr[i]=x+(y%n)*n;
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/n;
        }
    }
};
