class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int str = 0;
        int end = nums.size()-1;
        int mid = 0;
        while(str<=end){

            mid = str + (end-str)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                str = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return str;
    }
};