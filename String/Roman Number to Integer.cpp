//Time Comp: O(n)
//Space Comp: O(1)



class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> mp{{'I',1},
                                  {'V',5},
                                  {'X',10},
                                  {'L',50},
                                  {'C',100},
                                  {'D',500},
                                  {'M',1000}
        };
        int sum=mp[str.back()];
        for(int i=str.size()-2;i>=0;i--){
            if(mp[str[i]]<mp[str[i+1]])
                sum-=mp[str[i]];
            else
                sum+=mp[str[i]];
        }
        return sum;
    }
};
