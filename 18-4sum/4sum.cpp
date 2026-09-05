class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin() , nums.end());
        int p2 = 0;
        int p3 = 0;
        int p4 = 0;
        
        vector<vector<int>> ans;

        if (nums.size() < 4)
            return ans;

        for(int p1 = 0; p1<nums.size()-3; p1++){

            if(p1>0 && nums[p1] == nums[p1-1]) continue;

            for(int p2 =p1+1; p2<nums.size()-2; p2++){

                if(p2>p1+1 && nums[p2] == nums[p2-1]) continue;

                p3 = p2+1;
                p4 = nums.size()-1;
                long long sum = 0;

                while(p3 < p4){
                    sum = (long long)nums[p1]+nums[p2]+nums[p3]+nums[p4];

                    if(sum == target){
                        ans.push_back({nums[p1],nums[p2],nums[p3],nums[p4]});
                        p3++;
                        p4--;

                        while(p3<p4 && nums[p3] == nums[p3 - 1]){ p3++;}
                        while(p3<p4 && nums[p4] == nums[p4 + 1]){ p4--;}
                    }
                    else if(sum > target) p4--;
                    else p3++;

                    
                    
                }
            }
        }
        return ans;
    }
};