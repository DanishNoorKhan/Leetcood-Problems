class Solution {
public:
    bool judgeSquareSum(int c) {

        long long p1=0;
        long long p2=sqrt(c);
        long long sum=0;

        while(p1<=p2){
            sum = p1*p1 + p2*p2;
            if(sum==c){
                return true;
            }
            else if(sum < c){
                p1++;
            }
            else{
                p2--;
            }

            
        }
        return false;
    }
};