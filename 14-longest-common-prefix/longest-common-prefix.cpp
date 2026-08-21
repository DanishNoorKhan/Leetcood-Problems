class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string new_str = "";
        int size = strs.size();
        int idx = 0;

        while(true){
            
            if(idx >= strs[0].size()) return new_str;

            for(int i=1; i<size; i++){
                
                if(idx >= strs[i].size() || strs[0][idx] != strs[i][idx]){
                    return new_str;
                }

            }

            new_str += strs[0][idx];
            idx++;

        }
    }
};