class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans = {0,0};
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(target - nums[i] == nums[j]){
                    ans[0]=i;
                    ans[1]=j;
                    break; 
                }
            }
        }
        return ans;
    }
};