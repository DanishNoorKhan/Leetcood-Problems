class Solution {
public:
    bool checkDivisibility(int n) {
    int num = n;
    int sum = 0;
    int dig = 0;
    int product = 1;

    while(num > 0){
        
        dig = num % 10;
        sum += dig;
        product *= dig;
        num = num / 10;
        
    }

    
    int result = sum + product;

    if(n % result == 0){
        return true;
    }
    else{
        return false;
    }
    }
};