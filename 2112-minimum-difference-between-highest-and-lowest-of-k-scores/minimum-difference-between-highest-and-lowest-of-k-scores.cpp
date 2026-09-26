class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        if(nums.size() == 1) return 0;
        for(int i=0; i+k-1<nums.size(); i++){
                int def = nums[i+k-1] - nums[i];
                mini = min(mini , def);
            }
            return mini;
        } 
    };