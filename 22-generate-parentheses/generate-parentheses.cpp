class Solution {
public:
    void valid(string ans , int open , int closs , int &n, vector<string> &full){
        if(ans.size()==n*2){
            full.push_back(ans);
        }
        if(open < n){
            ans.push_back('(');
            valid(ans , open+1 , closs , n , full);
            ans.pop_back();
        }
        if(closs < open){
            ans.push_back(')');
            valid(ans , open , closs+1 , n , full);
            ans.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> full;
        valid("", 0 , 0 , n , full);
        return full;
    }
    
};