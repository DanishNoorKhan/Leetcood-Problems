class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        map<int, int> freq;

        // Frequency count
        for(int x : digits) {
            freq[x]++;
        }

        int count = 0;

        // Hundreds digit: 1-9
        for(int i = 1; i <= 9; i++) {

            if(freq[i] == 0)
                continue;

            freq[i]--;

            // Tens digit: 0-9
            for(int j = 0; j <= 9; j++) {

                if(freq[j] == 0)
                    continue;

                freq[j]--;

                // Units digit: only even digits
                for(int k = 0; k <= 8; k += 2) {

                    if(freq[k] == 0)
                        continue;

                    freq[k]--;

                    count++;

                    // Give the copy back
                    freq[k]++;
                }

                // Give the copy back
                freq[j]++;
            }

            // Give the copy back
            freq[i]++;
        }

        return count;
    }
};