class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int size = nums.size();
        int hash[101] = {0};
        
        //Hash Array
        for(int i=0; i<size; i++){

            hash[nums[i]] += 1;
        }

        // finding

        int i=k;
        while(true){

            if(i > 100) //in case the answer is out of bound
                return i;

            if(hash[i] == 0) return i;
            i += k;
        }

     return -1;  
    }
};