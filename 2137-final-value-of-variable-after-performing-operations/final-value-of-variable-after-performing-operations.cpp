class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        
        for(int i=0; i<operations.size(); i++){
            if(operations[i][0]=='X'){
                
                if(operations[i][1]=='+'){
                    count++;
                }
                else count--;
            }
            else if(operations[i][0]=='+'){
                count++;
                
            }
            else{
                count--;
                
            }
        }
        return count;
    }
};