// Expected Time Complexity: O(N * M)
// Expected Auxiliary Space: O(1)


int NeedleinHaystack(string haystack, string needle) 
{
    int h=haystack.length();
    int n=needle.length();
    for(int i=0;i<=h-n;i++){
        int j=0;
        for(j=0;j<n;j++){
            if(haystack[i+j]!=needle[j])
                break;
        }
        if(j==n)
            return i;
    }
    return -1;
}
