class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pro = 1;
        int dig = 0;
        while(n > 0){
            dig = n % 10;
            sum += dig;
            pro *= dig;
            n /=10;
        }
        return pro-sum;
    }
};