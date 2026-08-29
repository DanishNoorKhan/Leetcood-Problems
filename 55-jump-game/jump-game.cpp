class Solution {
public:
    bool canJump(vector<int>& nums) {

        int size = nums.size();
        int maxreach = 0;

        for(int i = 0; i < size; i++) {

            if(i > maxreach)
                return false;

            maxreach = max(maxreach, i + nums[i]);

            if(maxreach >= size - 1)
                return true;
        }

        return true;
    }
};