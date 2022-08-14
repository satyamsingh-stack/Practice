//time Comp: O(N)
//Space Comp: O(1)


string encode(string src)
{     
  string ans="";
  int count=1;
  for(int i=1;i<=src.length();i++){
      if(src[i]==src[i-1])
        count++;
      else{
          ans=ans+src[i-1]+to_string(count);
          count=1;
      }
  }
  return ans;
}   
