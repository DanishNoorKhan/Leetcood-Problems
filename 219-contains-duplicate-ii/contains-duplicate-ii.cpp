class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int size = nums.size();
        for(int i=0; i<size; i++){

            auto it = mp.find(nums[i]);
            if(it != mp.end()){

                if(abs( i - it->second) <= k){
                    return true;
                }
                else{
                    mp.erase(nums[i]);
                }
            }
             mp[nums[i]] = i;

        }
        return false;
    }
};