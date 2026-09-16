class Solution {
public:
   
    int tribonacci(int n) {
        int a = 0;
        int b = 1;
        int c = 1;
        int sum = 0;
        int i = 3;

        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        while(i<=n){
            
            sum = a + b + c;
            a = b;
            b = c;
            c = sum;
            i++;

        }
        return c;
    }
};