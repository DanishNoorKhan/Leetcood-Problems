class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> a;

        for (int x : nums) a.push_back(abs(x));

        sort(a.rbegin(), a.rend()); 
        
        int n = a.size();
        int plus = (n + 1) / 2;

        long long score = 0;
        for (int i = 0; i < n; i++) {

            long long sq = a[i] * a[i];

            if (i < plus) score += sq;
            else score -= sq;
        }
        return score;
    }
};