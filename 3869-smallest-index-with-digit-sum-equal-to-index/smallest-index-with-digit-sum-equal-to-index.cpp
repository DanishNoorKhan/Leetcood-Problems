class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            int sum = 0;

            if(nums[i] > 9){

                while(nums[i] > 0){
                    int dig = nums[i]%10;
                    sum += dig;
                    nums[i] /= 10;

                }
                if(sum == i){
                    return i;
                }
            }
            else{
                if(nums[i] == i){
                    return i;
                }
            }
            
        }
        return -1;
    }
};