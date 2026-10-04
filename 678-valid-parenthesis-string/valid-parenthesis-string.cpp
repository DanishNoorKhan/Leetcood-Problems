class Solution {
public:
    bool checkValidString(string s) {
        stack<int> par;
        stack<int> star;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='('){
                par.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(!par.empty()) par.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(!par.empty()){
            if(star.empty()) return false;

            if(par.top() < star.top()){
                par.pop();
                star.pop();
            }
            else{
                return false;
            }

        }
        return true;
    }
};