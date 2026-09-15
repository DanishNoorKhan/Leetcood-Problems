class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans = nums;
        sort(ans.begin(),ans.end());

        for(int i=0; i<nums.size(); i++){
            int first = nums[0];

            for(int i=0; i<nums.size()-1; i++){
                nums[i] = nums[i+1];
            }
            nums[nums.size()-1] = first;

            if(nums == ans) return true;
        }
        return false;
    }
};