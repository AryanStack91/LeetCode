class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());

        string s1 = strs[0];
        string s2 = strs[n - 1];

        int i = 0;
        int j = 0;
        string ans = "";
        while (i < s1.size() && j < s2.size()) {
            if (s1[i] == s2[j]) {
                ans += s1[i];
                i++;
                j++;
            } else {
                break;
            }
        }
        return ans;
    }
};