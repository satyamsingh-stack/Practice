int convertFive(int n) {
    // Your code here
    int i=0;
    int ans=0;
    while(n){
        int r=n%10;
        if(r==0)
            r=5;
        ans=ans+(r*pow(10,i));
        n=n/10;
        i++;
    }
    return ans;
}
