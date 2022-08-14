//Time Comp:O(n)
//Space Comp: O(1)


int strstr(string s, string x)
{
     int n=s.size(),m=x.size();
     for(int i=0;i<=n-m;i++){
         int j=0;
         for(j=0;j<m;j++){
             if(s[i+j]!=x[j])
                break;
         }
         if(j==m)
            return i;
     }
     return -1;
}
