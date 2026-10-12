class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            auto it = mp.find(s[i]);
            if(it != mp.end()){
                if(it->second == 1){
                    return i;
                }
            }
        }
        return -1;
    }
};