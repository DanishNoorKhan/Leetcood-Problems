
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;

        for(int i = 0; i < s.size(); i++) {

            if(!st.empty() && st.top().first == s[i]) {
                st.top().second++;

                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {
                st.push({s[i], 1});
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans += string(st.top().second, st.top().first);
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
