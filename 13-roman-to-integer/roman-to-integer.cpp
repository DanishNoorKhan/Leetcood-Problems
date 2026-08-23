class Solution {
public:
    int romanToInt(string s) {

        int size = s.size();
        int sum = 0;

        for(int i = 0; i < size; i++) {
            int current = 0;
            int next = 0;

            // current value
            if(s[i] == 'I') current = 1;
            else if(s[i] == 'V') current = 5;
            else if(s[i] == 'X') current = 10;
            else if(s[i] == 'L') current = 50;
            else if(s[i] == 'C') current = 100;
            else if(s[i] == 'D') current = 500;
            else if(s[i] == 'M') current = 1000;

            // next value (nested if)
            
            if(i + 1 < size) {

                if(s[i+1] == 'I') next = 1;
                else if(s[i+1] == 'V') next = 5;
                else if(s[i+1] == 'X') next = 10;
                else if(s[i+1] == 'L') next = 50;
                else if(s[i+1] == 'C') next = 100;
                else if(s[i+1] == 'D') next = 500;
                else if(s[i+1] == 'M') next = 1000;
            }

            
            if(current < next)
                sum -= current;
            else
                sum += current;
        }

        return sum;
    }
};