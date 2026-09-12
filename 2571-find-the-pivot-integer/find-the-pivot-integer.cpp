class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefix(n);
        prefix[0] = 1;

        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1]+(i+1);
        }
        
        int tot = prefix[n-1];
        for(int i=0; i<n; i++){
            int left =0;
            int right = 0;

            left = prefix[i];
            

            right = tot - prefix[i] + (i+1);

            if(left == right){
                return i+1;
            }
        }
        return -1;
    }
};