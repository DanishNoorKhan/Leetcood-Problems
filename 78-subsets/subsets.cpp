class Solution {
public:
    void subset(int i ,vector<int> &ans , vector<int> &nums , vector<vector<int>> &all){
        if(i==nums.size()){
            all.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        subset(i + 1, ans, nums, all);
        ans.pop_back();
        subset(i + 1, ans, nums, all);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> all;
        vector<int> ans;
        subset(0,ans,nums,all);
        return all;
    }
};