class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int i=1;
        while(n >= i){
            count++;
            n = n - i;
            i++;
        }
        return count;
    }
};