class Solution {
public:
    string multiply(string num1, string num2) {

        if(num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> result(n + m, 0);

        // Multiply each digit
        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                result[i + j + 1] += a * b;
            }
        }

        // Handle carry
        for(int i = result.size() - 1; i > 0; i--) {

            result[i - 1] += result[i] / 10;
            result[i] %= 10;
        }

        // Convert result to string
        string ans = "";

        int i = 0;

        while(i < result.size() && result[i] == 0)
            i++;

        while(i < result.size()) {
            ans.push_back(result[i] + '0');
            i++;
        }

        return ans;
    }
};