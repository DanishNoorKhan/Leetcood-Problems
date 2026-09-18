class Solution {
public:
    vector<int> smaller(vector<int> &nums , int i){

        int count = 0;
        vector<int> ans;

        if(i == nums.size()){
            return ans;
        }
        
        for(int j=0; j<nums.size(); j++){
            if(nums[i] > nums[j]){
                count++;
            }
        }
        ans = smaller(nums, i+1); 
        ans.insert(ans.begin(), count);
        return ans;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        return smaller(nums,0);
    }
};