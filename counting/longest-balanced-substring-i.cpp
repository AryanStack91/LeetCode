class Solution {
public:
    bool ischeck(vector<int>& s) {
        int c = 0;
        for (int i = 0; i < 26; i++) {
            if (s[i] == 0) {
                continue;
            }
            if (c == 0) {
                c = s[i];
            } else if (s[i] != c) {
                return 0;
            }
        }
        return 1;
    }
    int longestBalanced(string s) {
        int result = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            vector<int> a(26, 0);

            for (int j = i; j < n; j++) {
                a[s[j] - 'a']++;

                if (ischeck(a)) {
                    result = max(result, j - i + 1);
                }
            }
        }
        return result;
    }
};