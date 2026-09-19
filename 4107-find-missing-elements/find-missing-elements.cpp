class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int p1 = *min_element(nums.begin(), nums.end());
        int p2 = *max_element(nums.begin(), nums.end());

        vector<int> ans;

        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(int i=p1; i<=p2;i++){

            auto it = mp.find(i);
            if(it == mp.end()){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};