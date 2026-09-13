class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        long long sum=0;
        int i=0;
        int j=mat.size()-1;
        
        while(i<mat.size())
        {
           if(i!=j)
            sum+=mat[i][i]+ mat[i][j];
            
            if(i==j) sum+=mat[i][i];
    
            i++;
            j--;
        }
        return sum;
    }
};