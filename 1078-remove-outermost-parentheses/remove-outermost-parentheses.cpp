class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        int idx=1;
        string new_s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){

                if(depth > 0){
                    new_s.push_back(s[i]);
                }
                depth++;
            }
            else{
                depth--;

                if(depth>0){
                    new_s.push_back(s[i]);
                }
            }

            
        }
        return new_s;
    }
};