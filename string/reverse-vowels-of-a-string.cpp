class Solution {
public:
    string reverseVowels(string s) {
        string ans = "";
        int i = 0;
        string x = "";

        while (i < s.size()) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                x += s[i];
            }
            i++;
        }
        i = 0;
        int j = x.size() - 1;
        while (i < s.size()) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                s[i] = x[j];
                j--;
            }
            i++;
        }
        return s;
    }
};