class Solution {
public:
    int func(int num){
        if(num <= 9) return num;

        int sum = 0;

        while(num>0){
            int dig = num % 10;
            sum+=dig;
            num /= 10;
        }

        return func(sum);
    }
    int addDigits(int num) {
       
        
        return func(num);
    }
};