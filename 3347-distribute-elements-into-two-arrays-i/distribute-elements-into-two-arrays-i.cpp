class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1{nums[0]};
        vector<int> arr2{nums[1]};
        int size = nums.size();
        int arr1_s = 0;
        int arr2_s = 0;

        for(int i=2; i< size; i++){

            arr1_s = arr1.size()-1;
            arr2_s = arr2.size()-1;

            if(arr1[arr1_s] > arr2[arr2_s])

                arr1.push_back(nums[i]);
            else

                arr2.push_back(nums[i]);
        }

        //add arrays
        for(int i=0; i<arr2.size(); i++){

            arr1.push_back(arr2[i]);
        }

        return arr1;
    }
};