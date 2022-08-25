// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

int Search(vector<int> vec, int K) {
    int mid,low=0,high=vec.size()-1;
    while(low<=high){
        mid=(low+high)>>1;
        if(vec[mid]==K)
            return mid;
        if(vec[mid]>=vec[low]){
            if(vec[low]<=K && vec[mid]>=K){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        else{
            if(vec[mid]<=K && vec[high]>=K){
                low=mid+1;
            }
            else
                high=mid-1;
        }
    }
    return -1;
}
