class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int st = 0;
        int maxi = 0;
        for (int i = 0; i < s.length(); i++) {
            while (set.find(s[i]) != set.end()) {
                set.erase(s[st]);
                st++;
            }
            set.insert(s[i]);
            maxi = max(maxi, i - st + 1);
        }
        return maxi;
    }
};