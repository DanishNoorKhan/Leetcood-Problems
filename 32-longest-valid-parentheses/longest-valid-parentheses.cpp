class Solution {
public:
    int longestValidParentheses(string s) {

        int str = -1;
        stack<int> st;
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                st.push(i);
            }
            else {

                if(!st.empty()) {
                    st.pop();

                    if(!st.empty()) {
                        ans = max(ans, i - st.top());
                    }
                    else {
                        ans = max(ans, i - str);
                    }
                }
                else {
                    str = i;
                }
            }
        }

        return ans;
    }
};