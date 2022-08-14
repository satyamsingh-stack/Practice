//Time Comp: O(n)
//Space Comp: O(1)

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n=str1.length();
        bool clockwise=true,anticlockwise=true;
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[(i+2)%n]){
                clockwise=false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(str1[(i+2)%n]!=str2[i]){
                anticlockwise=false;
                break;
            }
        }
        return clockwise || anticlockwise;
    }

};
