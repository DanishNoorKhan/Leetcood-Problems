class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int p1 = 0;
        int p2 = 0;
        int sum = 0;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size() -2 ; i++){
            p1 = i+1;
            p2 = nums.size()-1;

            if( i>0 && nums[i] == nums[i-1]) continue;

            while(p1<p2){

                sum = nums[i] + nums[p1] + nums[p2];

                if(sum == 0){

                    ans.push_back({nums[i], nums[p1], nums[p2]});

                    p1++;
                    p2--;

                    while(p1 < p2 && nums[p1] == nums[p1-1])
                        p1++;

                    while(p1 < p2 && nums[p2] == nums[p2+1])
                        p2--;
                }
                else if(sum > 0) p2--;
                else p1++;
            }
            }
            return ans;
        }
        
};