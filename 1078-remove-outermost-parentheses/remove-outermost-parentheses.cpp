class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        int idx=1;
        string new_s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                depth++;
            }
            else depth--;

            if (depth==0){

                //idx++;
                for(int j=idx; j<i; j++){
                    new_s.push_back(s[j]);
                    idx++;
                }
                idx+=2;
            }
        }
        return new_s;
    }
};