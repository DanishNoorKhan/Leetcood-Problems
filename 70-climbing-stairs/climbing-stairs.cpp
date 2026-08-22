class Solution {
public:
    int climbStairs(int n) {
        // WOW ! its just like fabonachi pattorn

        int a=0;
        int b=1;
        int c=0; 

        //edge case
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 3;

        for(int i=0; i<n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};