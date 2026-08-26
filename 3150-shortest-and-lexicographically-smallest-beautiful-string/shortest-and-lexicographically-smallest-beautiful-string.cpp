class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int left = 0;
        int count = 0;

        string best = "";

        for (int str = 0; str < s.size(); str++) {

            if (s[str] == '1')
                count++;

            while (count == k) {

                string new_s = s.substr(left, str - left + 1);

                if (best == "" ||
                    new_s.length() < best.length() ||
                    (new_s.length() == best.length() && new_s < best)) {

                    best = new_s;
                }

                if (s[left] == '1')
                    count--;

                left++;
            }
        }

        return best;
    }
};