// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(|S|).

string find(string S) {
    //code here
    unordered_map<char,int> mp;
    for(int i=0;i<S.length();i++){
        mp[S[i]]++;
    }
    string ch="";
    for(int i=0;i<S.length();i++){
        if(mp[S[i]]==1){
            ch+=S[i];
            break;
        }
    }
    if(ch.length()==0)
        return ch+="-1";
    return ch;
}
