class Solution {
public:

    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1) return true;

        
        

        for(int i=0; i<n-1; i++){

                if(nums[i] <= nums[i+1]){}
                else{

                    for(int i=0; i<n-1; i++){
                    if(nums[i] >= nums[i+1]){}
                    else return false;
                }
            }
            
        }

        return true;
    }
};