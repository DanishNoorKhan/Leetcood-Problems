class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size();
        int hash_size = size*size+1;
        //as grid=2 then 2*2 = 4 , 4+1 = 5 so ignore 0 index we have 4 boxes
        vector<int> hash(hash_size , 0);

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                hash[grid[i][j]]++;
            }
        }
        
        vector<int> ans(2);
        for(int i=1; i<hash_size; i++){

            if(hash[i] == 0) ans[1]=i;
            else if(hash[i]==2) ans[0]= i;
        }
       
        return ans;
    }
};