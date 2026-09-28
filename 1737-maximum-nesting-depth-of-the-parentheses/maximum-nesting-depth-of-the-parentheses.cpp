class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int depth = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;

            depth = max(count , depth);
        }
        return depth;
    }
};