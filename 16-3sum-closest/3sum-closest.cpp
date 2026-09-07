class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long long closest = nums[0] + nums[1] + nums[2];
        int p1 = 0;
        int p2 = 0;

        sort(nums.begin() , nums.end());

        for(int i=0; i<nums.size()-2; i++){
            p1 = i+1;
            p2 = nums.size()-1;
            long long sum = 0;

            if(i>0 && nums[i] == nums[i-1]) continue;

            while(p1<p2){
                sum = (long long)nums[i]+nums[p1]+nums[p2];

                if(abs(sum - target) < abs(closest - target)){

                   closest = sum;
                } 

                //Move pointers
                if(sum == target) return sum;
                else if(sum < target) p1++;
                else p2--;
            }
        }
        return closest;
    }
};