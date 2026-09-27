class Solution {
public:
    void subset(vector<int>&nums , vector<int>&ans , int i , vector<vector<int>> & full){
        if(i==nums.size()){
            full.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        subset(nums,ans,i+1,full);

        ans.pop_back();
        while(i < nums.size()-1 && nums[i] == nums[i+1] ) i++;
        subset(nums,ans,i+1,full);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> full;
        sort(nums.begin(),nums.end());
        subset(nums , ans , 0 , full);
        return full;
    }
};