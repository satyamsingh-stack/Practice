// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).


class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        int low=0,high=binArray.size()-1;
        while(low<high){
            if(binArray[low]==0)
                low++;
            if(binArray[low]==1){
                swap(binArray[low],binArray[high]);
                high--;
            }
        }
        return binArray;
    }
};
