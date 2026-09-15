class Solution {
public:
    bool check(vector<int> &nums , int n , int inc ){

        if(n==1) return true;

        
        if(inc) { //increasing
            if(nums[n-1] < nums[n-2])
                return false;
        }
        else{ //decreasing
            if(nums[n-1] > nums[n-2])
                return false;
        }
        

        return check(nums , n-1 , inc);
    }
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1) return true;
        return (check(nums , n , true ) || check(nums , n , false));

    }
};