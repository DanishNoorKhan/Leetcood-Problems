class Solution {
public:
    bool func(int n){
        if(n==1) return 1;

        if(n % 3 != 0) return false;

        return func(n / 3);
    }
    bool isPowerOfThree(int n) {
        if(n<=0) return false;

        return func(n);
    }
};