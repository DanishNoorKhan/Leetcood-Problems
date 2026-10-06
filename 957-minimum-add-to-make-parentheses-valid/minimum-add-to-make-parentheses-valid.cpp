class Solution {
public:
    int minAddToMakeValid(string s) {
        int open =0;
        int closs = 0;
        

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                
                open++;
            }
            else{
                
                if(open == 0){
                    closs++;
                }
                else{
                    open--;
                }
                
            }
        }
        return open+closs;
    }
};