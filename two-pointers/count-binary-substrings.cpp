class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int prev_count = 0;
        int curr_count = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                curr_count++;
            } else {
                result += min(prev_count, curr_count);
                prev_count = curr_count;
                curr_count = 1;
            }
        }

        result += min(prev_count, curr_count);
        return result;
    }
};