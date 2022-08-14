//Time Comp:O(n)
//space Comp: O(1)



class Solution{
  public:
    string convertToRoman(int n) {
        string ans="";
        while(n){
            if(n>=1000){
                ans=ans+"M";
                n=n-1000;
            }
            else if(n>=900){
                ans=ans+"CM";
                n=n-900;
            }
            else if(n>=500){
                ans=ans+"D";
                n=n-500;
            }
            else if (n >= 400){
                ans = ans + "CD";
                n = n - 400;
            }
            else if(n >= 100){
                ans = ans + "C";
                n = n - 100;
            }
            else if(n>=90){
                ans=ans+"XC";
                n=n-90;
            }
            else if(n>=50){
                ans=ans+"L";
                n=n-50;
            }
            else if (n >= 40){
                ans = ans + "XL";
                n = n - 40;
            }
            else if (n >= 10){
                ans = ans + "X";
                n = n - 10;
            }
            else if(n>=9){
                ans=ans+"IX";
                n=n-9;
            }
            else if (n >= 5){
                ans = ans + "V";
                n = n - 5;
            }
            else if(n>=4){
                ans=ans+"IV";
                n=n-4;
            }
            else if(n>=1){
                ans=ans+"I";
                n=n-1;
            }
        }
        return ans;
    }
};
