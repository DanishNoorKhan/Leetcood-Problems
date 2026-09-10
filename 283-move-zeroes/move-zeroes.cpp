class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int p1 = 0;
        int p2 = p1+1;
        while(p1 < nums.size()-1 && p2 <nums.size()){
            if(nums[p1] != 0){
                p1++;
                p2 = p1 + 1;
            }
            else if(nums[p2] == 0){

                p2++;}
            else {
                swap(nums[p1], nums[p2]);
                p1++;
                p2 = p1 + 1;
            }
        }
        for(int i=0; i<nums.size(); i++){
            cout<<nums[i]<<" ";
        }
    }
};