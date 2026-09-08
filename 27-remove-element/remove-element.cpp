class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p1 = 0;
        int p2 = nums.size()-1;

        while(p1<p2){

            if(nums[p1] == val){

                if(nums[p1] == nums[p2]){
                    p2--;
                }
                else{
                    swap(nums[p1] , nums[p2]);
                    p1++;
                    p2--;
                }
            }
            else{
                p1++;
            }
        }

        int count = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] ==  val){
                break;
            }
            count++;
        }

        return count;
    }
};