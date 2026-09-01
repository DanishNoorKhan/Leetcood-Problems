class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int, int> mp;
        for(int i=0; i<jewels.size(); i++){
            mp[jewels[i]]++;
        }

        int sum = 0;

        for(int i = 0; i<stones.size(); i++){
            auto it = mp.find(stones[i]);
            if(it != mp.end()){
                if(it->second > 0){
                    sum += it->second;
                }
            }
        }
        return sum;
    }
};