class Solution {
public:
    int minInsertions(string s) {
        int open=0;
        int closs=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                closs += 2;
                if (closs % 2 == 1) {  
                    open++;
                    closs--;
                 }
            }
            else{
                closs--;

                if(closs < 0){
                    open++;
                    closs += 2;
                }
            }
        }
        
        return open+closs;
    }
};