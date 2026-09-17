class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string new_s = "";
        int idx = 0;
        
        while(idx < s.size()){
            int next = 0;
            for(int i=0; i<indices.size(); i++){
                if(idx == indices[i]){

                    new_s.push_back(s[i]);
                    idx++;
                }
            }
        }
        return new_s;
    }
};