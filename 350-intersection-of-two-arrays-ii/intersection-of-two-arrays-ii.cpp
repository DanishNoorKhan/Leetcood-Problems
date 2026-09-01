class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;

        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }
        

        vector<int> ans;
     
        for(int i=0; i<nums2.size(); i++){
            auto it = mp.find(nums2[i]);
            
            if(it != mp.end()){

                if(it->second > 0 ){
                ans.push_back(it->first);
                mp[it->first]--;
            }
            }
        }
        return ans;
    }
};