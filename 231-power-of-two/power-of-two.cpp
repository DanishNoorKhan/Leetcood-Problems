class Solution {
public:
    bool func(int n){
        if(n==1) return 1;

        if(n % 2 != 0) return false;

        return func(n / 2);
    }
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        return func(n);
    }
};