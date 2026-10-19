class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int str = 0;
        int end = nums.size()-1;
        int mid = 0;
        int first = -1;
        int last = -1;
        vector<int> ans;

        sort(nums.begin(),nums.end());

        while(str<=end){
            
               mid = str+(end - str)/2;
            if(nums[mid]==target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                str = mid + 1;
            }
            else{
                end = mid - 1;
            }

        }
        str = 0;
        end = nums.size()-1;

        while (str <= end) {
               mid = str + (end - str) / 2;

            if (nums[mid] == target) {
                last = mid;
                str = mid + 1;
            }
            else if (nums[mid] < target) {
                str = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        if(first != -1){
            
            for(int i=first; i<=last; i++){
                ans.push_back(i);
            
            }      
        }

        return ans;

    }
};