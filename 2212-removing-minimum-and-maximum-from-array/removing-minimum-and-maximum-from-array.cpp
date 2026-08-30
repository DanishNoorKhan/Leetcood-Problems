class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int size = nums.size();
        int mini = nums[0];
        int maxi = nums[0];
        int mini_idx = 0;
        int maxi_idx = 0;

        for(int i=0; i<size; i++){
            if(mini > nums[i]){
                mini = nums[i];
                mini_idx = i;
            }
            if(maxi < nums[i]){
                maxi = nums[i];
                maxi_idx = i;
            }
        }

        int left = min(mini_idx , maxi_idx );
        int right = max(mini_idx , maxi_idx);

        int front_del = right + 1;
        int end_del = size - left;
        int both_del = (left + 1) + (size - right);

    
    return min({front_del , end_del , both_del});
    }
};