class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> arr;
        int count = 0;

        for (int i = 0; i < seq.size(); i++) {

            if (seq[i] == '(') {
                count++;
                arr.push_back(count % 2);
            }
            else {
                arr.push_back(count % 2);
                count--;
            }
        }

        return arr;
    }
};