class Solution {
public:
    int reverseDegree(string s) {
        int sum  = 0;
        int value = 0;
        for(int i=0; i<s.size(); i++){

            value = 26 - (s[i] - 'a');
            value *= i+1;
            sum += value;
        }
        return sum;
    }
};