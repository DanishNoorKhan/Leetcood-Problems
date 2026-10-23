class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        bool done;
        
        for(int i=0; i<prices.size(); i++){
            done = false;
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j] <= prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    done = true;
                    
                    break;
                }
            }
            if(!done){
                ans.push_back(prices[i]); 
            }
        }
        return ans;
    }
};