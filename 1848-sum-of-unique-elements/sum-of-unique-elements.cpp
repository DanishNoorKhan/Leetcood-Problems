class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            auto it = mp.find(nums[i]);
            if(it != mp.end()){
                if(it->second == 1)
                    sum += nums[i];
            }
        }
        return sum;
        
    }
};