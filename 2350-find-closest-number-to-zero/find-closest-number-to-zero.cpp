class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size(); i++){

            if(nums[i] == 0){
                return 0;
            }
            else if(abs(nums[i]) < abs(mini)) {
                mini = nums[i];
            }
            else if(abs(nums[i]) == abs(mini) && nums[i] > mini) {
                mini = nums[i];
            }


        }
        return mini;
    }
};