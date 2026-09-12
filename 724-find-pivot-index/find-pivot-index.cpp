class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        vector<int> prefix(nums.size());
        prefix[0] = nums[0];

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        int total = prefix[nums.size()-1];

        for(int i = 0; i < nums.size(); i++){

            int left = 0;
            int right = 0;

            if(i == 0){
                left = 0;
            }
            else{
                left = prefix[i-1];
            }

            right = total - prefix[i];


            if(left == right) {
                return i;
            }
        }

        return -1;
    }
};