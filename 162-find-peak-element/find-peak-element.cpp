class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int s = 0;
        int e = size-1;

        //Peak version of binary search
        while(s < e){
            int m = s + (e-s)/2;

            if(nums[m] < nums[m+1]){
                s = m + 1;
            }
            else{
                e = m;
            }
        }
        return s;
    }
};