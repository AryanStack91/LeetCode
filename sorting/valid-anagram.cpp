class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> a, b;
        for (int i = 0; i < s.length(); i++) {
            a[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            b[t[i]]++;
        }
        return a == b;
    }
};