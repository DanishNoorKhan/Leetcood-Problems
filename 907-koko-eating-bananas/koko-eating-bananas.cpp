class Solution {
public:

    long long tot(vector<int>&piles , double speed){
        long long total_h=0;
        for(int i=0; i<piles.size(); i++){
            total_h += ceil(piles[i] / speed);
        }
        return total_h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       
       long long total_h=0;
       int maxi=0;
       int ans=0;

       for(int i=0; i<piles.size(); i++){
            maxi = max(maxi , piles[i]);
       }

       int str=1;
       int end = maxi;
       int mid = 0;
       while(str<=end){
            mid = str + (end - str) / 2;

            total_h = tot(piles , mid);

            if(total_h <= h){
                ans = mid;
                end = mid - 1;
            }
            else{
                str = mid + 1;
            }
       }
       return ans;
       
    }
};