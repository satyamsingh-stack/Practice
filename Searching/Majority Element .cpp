// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).


int majorityElement(int a[], int size)
{
        
    int c=0;
        int el=0;
        for(int i=0;i<size;i++){
            if(c==0)
                el=a[i];
            if(el==a[i])
                c++;
            else
                c--;
        }
        int check=0;
        for(int i=0;i<size;i++){
            if(a[i]==el)
                check++;
        }
        return check>size/2? el:-1;
        
}
