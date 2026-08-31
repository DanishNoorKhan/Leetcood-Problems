class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> u_mp;
        int size = nums.size();

        for(int i=0; i<size; i++){
        
            auto it = u_mp.find(nums[i]);

            if(it != u_mp.end()){
                return true;
            }
            else{
                u_mp[nums[i]] = 1;
            }

        }
        return false;
    }
};