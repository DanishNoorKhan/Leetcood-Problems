class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int row = matrix.size();
        vector<int> ans;
        
        
        for(int i=0; i<row; i++){
            int sum = 0;
            for(int j=0; j<matrix[i].size(); j++){
                sum += matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};