//Time Comp: O(n)
//Space Comp: O(256)



int remAnagram(string str1, string str2)
{
    int hash1[26]={0};
    int hash2[26]={0};
    for(int i=0;i<str1.length();i++)
        hash1[str1[i]-'a']++;
    for(int i=0;i<str2.length();i++)
        hash2[str2[i]-'a']++;
    int c=0;
    for(int i=0;i<26;i++){
        c=c+abs(hash2[i]-hash1[i]);
    }
    return c;
}
