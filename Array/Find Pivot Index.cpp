class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)
            sum+=x;
        int lsum=0;
        int rsum=sum;
        for(int i=0;i<nums.size();i++){
            rsum=rsum-nums[i];
            if(lsum==rsum)
                return i;
            lsum+=nums[i];
        }
        return -1;
    }
};
