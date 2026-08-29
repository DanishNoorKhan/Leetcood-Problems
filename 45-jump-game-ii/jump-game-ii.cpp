class Solution {
public:
    int jump(vector<int>& nums) {
        
        int size = nums.size();
        int maxreach = 0;
        int jump_counter = 0;
        int jumpend = 0;

        for(int i=0; i<size-1; i++){

            maxreach = max(maxreach , i + nums[i]);

            if(i == jumpend){
                jumpend = maxreach;
                jump_counter++;
            }

        }

        return jump_counter;
    }
};