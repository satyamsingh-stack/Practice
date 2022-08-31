//Time Comp: O(N)
//Space Comp: O(1)

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        int lsum=0;
        int rsum=sum;
        for(int i=0;i<n;i++){
            rsum=rsum-a[i];
            if(rsum==lsum)
                return i+1;
            else
                lsum+=a[i];
        }
        return -1;
    }

};
