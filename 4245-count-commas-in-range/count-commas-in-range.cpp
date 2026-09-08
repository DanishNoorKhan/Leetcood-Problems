class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        int j=n;
        if(n > 999){
            while(j>999){
                count++;
                j--;
            }
        }
        else{
            return 0;
        }
        return count;
    }
};