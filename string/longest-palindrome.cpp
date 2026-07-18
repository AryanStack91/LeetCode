class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> mp;

        for (char c : s) {
            mp[c]++;
        }
        if (mp.size() == 1) {
            return s.size();
        }
        int ans = 0;
        bool odd = false;
        ;
        for (auto& x : mp) {
            if (x.second % 2 != 0) {
                ans += x.second - 1;
                odd = true;
            } else {
                ans += x.second;
            }
        }
        return odd == true ? ans + 1 : ans;
    }
};