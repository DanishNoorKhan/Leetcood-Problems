class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // array sorting
        int p1 = 0;
        int p2 = 1;

        sort(nums.begin(), nums.end());
        
        int sum = 0;
        int size = nums.size();

        while(true){ // of i can use condition in while loop

            if(p2 >= size) break;

            sum += min(nums[p1],nums[p2]);
            p1+=2;
            p2+=2;

            
        }

        return sum;
    }
};