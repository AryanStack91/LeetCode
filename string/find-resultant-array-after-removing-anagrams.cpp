class Solution {
public:
    bool check_ana(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        vector<int> a(26, 0);

        for (int i : s1) {
            a[i - 'a']++;
        }

        for (int i : s2) {
            a[i - 'a']--;
        }

        for (int x : a) {
            if (x != 0) {
                return false;
            }
        }

        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int j = 0;
        for (int i = 1; i < words.size(); i++) {
            if (check_ana(words[i - 1], words[i])) {
                words.erase(words.begin() + i);

                i--;
            }
        }
        return words;
    }
};