class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int , int> mp;
        int r_size = nums.size();

        //int c_size = nums[0].size();
        //its not valid becouse all rows are not of same size, got it !

        for(int i=0; i<r_size; i++){
            for(int j=0; j<nums[i].size(); j++){
                mp[nums[i][j]]++;
            }
        }

        vector<int> ans;

        for(int i=0; i<nums[0].size(); i++){

            auto it = mp.find(nums[0][i]);

            if(it != mp.end()){
                if(it->second == r_size ){
                    ans.push_back(nums[0][i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};