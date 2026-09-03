class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;

        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            if(nums[i] == 0 || i == nums.size()-1){
                max_count = max(count , max_count);
                count = 0;
            }
        }
        return max_count;
    }
    
};