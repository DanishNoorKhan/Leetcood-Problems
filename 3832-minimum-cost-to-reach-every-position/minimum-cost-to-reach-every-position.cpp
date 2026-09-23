class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int mini = INT_MAX;
        for(int i =0; i<cost.size(); i++){
            if(i==0) ans.push_back(cost[0]);
            else{
                for(int j=0; j<i; j++){
                    mini = min(mini , cost[j]);
                }
                if(mini < cost[i]){
                    ans.push_back(mini);
                }
                else{
                    ans.push_back(cost[i]);
                }
            }

        }
        return ans;
    }
};