class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = INT_MAX;
        int odd = INT_MAX;

        for(int i=0; i<nums1.size(); i++){
            if(nums1[i] % 2 == 0){
                even = min(even , nums1[i]);
            }
            else{
                odd = min(odd , nums1[i]);
            }
        }

        if(even == INT_MAX) return true;
        if(odd == INT_MAX) return true;

        //Importent condition
        if(odd < even){
            return true;
        }
        return false;
    }
};