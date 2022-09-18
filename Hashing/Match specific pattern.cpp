// Expected Time Complexity: O(N*K) (where K is the length of the pattern).
// Expected Auxiliary Space: O(N).

string helper(string pattern){
    unordered_map<char, int> mp;
    int i=0;
    string res="";
    for(char ch:pattern){
        if(mp.find(ch)==mp.end()){
            mp[ch]=i;
            i++;
        }
        res=res+to_string(mp[ch]);
    }
    return res;
    
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string> ans;
    int len=pattern.length();
    string hash=helper(pattern);
    for(string st:dict){
        if(len==st.length() && hash==helper(st))
            ans.push_back(st);
    }
    return ans;
}
