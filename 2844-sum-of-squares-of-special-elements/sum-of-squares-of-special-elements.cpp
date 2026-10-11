class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int tot = 0;
        int n = nums.size();
        for(int i=1; i<=nums.size(); i++){
            if(n%i==0){
                tot += nums[i-1]*nums[i-1];
            }
        }
        return tot;
    }
};