class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;

        for(int i=0; i<s.size(); i++){
            //Jo mapping pehli baar ban gayi, woh baad mein change nahi ho sakti.
            //Nice because its isolated !!!

            auto it = mp.find(s[i]);
            if(it != mp.end()){
                if(it->second != t[i]){
                    return false;
                }
            }
            else{
                for(auto it2=mp.begin(); it2 != mp.end(); it2++){
                    if(it2->second == t[i]){
                        return false;
                    }
                }
                  mp[s[i]] = t[i];
            }
        }
        return true;
    }
};