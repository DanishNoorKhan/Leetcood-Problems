class Solution {
public:
    bool func(int n){
        if(n==1) return 1;

        if(n%4!=0) return false;

        return func(n/4);
    }
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        return func(n);
    }
};