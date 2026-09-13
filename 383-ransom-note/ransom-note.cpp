class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0; i<magazine.size(); i++){
            mp[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            auto it = mp.find(ransomNote[i]);
            if(it != mp.end()){
                if(it->second == 0){
                    return false;
                }
                it->second--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};