class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        for(int i=0; i<nums.size(); i++){

            int mini = i;
            int maxi = 0;

            for(int j=i; j<nums.size(); j++){
                if(nums[mini] > nums[j]){
                    mini = j;
                }
            }
            for(int j=0; j<=i; j++){
                if(nums[maxi] < nums[j]){
                    maxi = j;
                }
            }

            if(nums[maxi] - nums[mini] <= k) return i;

        }
        return -1;
    }
};