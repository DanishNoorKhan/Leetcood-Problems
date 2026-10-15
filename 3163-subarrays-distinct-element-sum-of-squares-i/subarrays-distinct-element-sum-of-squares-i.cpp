class Solution {
public:
    
    int sumCounts(vector<int>& nums) {
        int size = nums.size();
        unordered_set<int> st;
        int ans=0;
        int count=0;

        for(int i=0; i<size; i++){
            st.clear();
            for(int j=i; j<size;j++){
                st.insert(nums[j]);
                int count = st.size();
                ans += count * count;
            }
            
        }
        return ans;
    }
};