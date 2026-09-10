class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       vector<int> ans;
       for(int i=0; i<arr.size(); i++){

        ans.push_back(arr[i]);
        if(arr[i] == 0 && ans.size() < arr.size()){
            ans.push_back(arr[i]);
        }
        if(ans.size() == arr.size()) break;

       }
       arr = ans; 
    }
};