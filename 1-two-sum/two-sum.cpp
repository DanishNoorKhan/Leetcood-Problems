class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int> u_mp;
        vector<int> ans = {0,0};
        

        for(int i=0; i<size; i++){

            auto it = u_mp.find(target - nums[i]);
            if(it != u_mp.end()){
                ans[0] = it->second;
                ans[1] = i;
                break;
            }
            else{
                u_mp[nums[i]] = i;
            }
        }
        return ans;
    }
};