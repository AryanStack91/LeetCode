class Solution {
private:
    bool isalnums(char a) {
        if ((a <= 'z' && a >= 'a') || (a >= 'A' && a <= 'Z')||(a >= '0' && a <= '9')) {
            return 1;
        }
        return 0;
    }

public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true;
        }
        vector<char> v;
        for (int i = 0; i < s.length(); i++) {
            if (isalnums(s[i])) {
                v.push_back(tolower(s[i]));
            }
        }
        int st = 0;
        int e = v.size() - 1;
        while (st < e) {
            if (v[st] != v[e]) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};