class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long j=n;
        long long range = 0;

        if(n > 999){

                if(j>999){
                    range = j-999;
                    count += range  ;
                    
                }
                if(j>999999){
                    range = j-999999;
                    count += range  ;
                    
                }
                if(j>999999999){
                    range = j-999999999;
                    count += range  ;
                    
                }
                if(j>999999999999){
                    range = j-999999999999;
                    count += range ;
                }
                if(j>999999999999999){
                    range = j-999999999999999;
                    count += range ;
                }
            }
        
        else{
            return 0;
        }
        return count;
    }
};