class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        vector<int> mount;

        for(int i=0; i<arr.size()-1; i++){

            if(arr[i] < arr[i+1]){
    
                mount.push_back(1);
            }
            else if(arr[i] > arr[i+1]){

                mount.push_back(0);
            }
            else{
                return false;
            }
        }
        

        if(mount[0] != 1) return false;
        if(mount[mount.size()-1] != 0) return false;

        bool up = true;
        for(int i=0; i<mount.size(); i++){
            if(up){
                if(mount[i] != 1){
                    up = false;
                }
            }
            if(!up){
                if(mount[i] == 1){
                    return false;
                }
            }

        }
        return true;
    }
};