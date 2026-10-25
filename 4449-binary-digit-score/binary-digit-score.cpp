class Solution {
public:
    int calculateScore(int a, int b) {

        int num = a;
        int s1=0;
        int s2=0;
        while(num > 0){

            int dig = num % 2;
            if(dig == 1){
                s1++;
            }

            num /= 2;
        }

        num = b;

        while(num > 0){

            int dig = num % 2;
            if(dig == 1){
                s2++;
            }

            num /= 2;
        }

        if(s1 >= s2){
            return s1*s2;
        }
        else{
            return s2/s1;
        }
    }
};