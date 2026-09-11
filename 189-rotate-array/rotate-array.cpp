class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        if(k == 0)
            return;

        k = k % nums.size();

        vector<int> ans;
        int idx = nums.size() - k;
        int str = 0;
        int t = 0;
        for(int i=idx; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }

        for(int i=0; i<idx; i++){
            ans.push_back(nums[i]);
            
        }
        nums = ans;    
    }
};