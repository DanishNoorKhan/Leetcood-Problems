class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256] = {0};
        int length = 0;
        int size = s.size();
        int str = 0;
        int end = 0;
        string new_s = "";

       for(int end = 0; end < size; end++) {  

            while(hash[s[end]] == 1) {
                hash[s[str]] = 0;
                str++;
            }
 
            hash[s[end]] = 1;
            
            // Max length 
            length = max(length, end - str + 1);
        }
        return length;
    }
     
};