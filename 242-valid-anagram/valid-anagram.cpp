class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp; //space complaxity is O(N)

        // edge case
        if(s.size() != t.size()) return false;
        
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            auto it = mp.find(t[i]);
            if(it != mp.end()){
                if(it->second > 0){
                    it->second--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};